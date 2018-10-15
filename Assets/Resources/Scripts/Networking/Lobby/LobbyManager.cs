using System;
using System.Collections;
using System.Collections.Generic;
using System.Linq;

using UnityEngine;
using UnityEngine.Networking;
using UnityEngine.Networking.Match;
using UnityEngine.Networking.Types;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

namespace Prototype.NetworkLobby
{
    public class LobbyManager : NetworkLobbyManager 
    {
        static short MsgKicked = MsgType.Highest + 1;

        public static new LobbyManager singleton;

        public bool PlayerSpawnsFinished
        {
            get
            {
                var spawnedPlayers = NetworkServer.objects
                    .Select(obj => obj.Value.gameObject)
                    .Where(gameObject => gameObject.tag == "Player");

                var lobbyPlayers = lobbySlots
                    .Where(slot => slot != null)
                    .Count();

                var spawnedPlayerCount = spawnedPlayers.Count();

                if(lobbyPlayers == spawnedPlayerCount)
                {
                    var playerIdentities = spawnedPlayers
                        .Select(player => player.GetComponent<NetworkIdentity>());
                    
                    bool observerCountsCorrect = playerIdentities
                        .All(playerIdentity =>
                        {
                            var observerCount = playerIdentity != null && playerIdentity.observers != null
                                ? playerIdentity.observers.Count
                                : 0;
                            
                            return observerCount == spawnedPlayerCount;
                        });

                    var playerComponentCount = gamePlayerPrefab
                        .GetComponents<NetworkBehaviour>()
                        .Count();

                    bool componentCountsCorrect = spawnedPlayers
                        .All(player => player.GetComponents<NetworkBehaviour>().Count() == playerComponentCount);

                    return observerCountsCorrect && componentCountsCorrect;
                }

                return false;
            }
        }

        public bool AllPlayersJoined
        {
            get
            {
                int lobbyPlayerCount = lobbySlots
                    .Where(slot => slot != null)
                    .Count();
                
                return lobbyPlayerCount == numPlayers;
            }
        }

        public GameObject LobbyFallback;

        [Header("Unity UI Lobby")]
        [Tooltip("Time in second between all players ready & match start")]
        public float prematchCountdown = 5.0f;
        
        public GameMenu inGameMenu;

        public RectTransform topPanel;
        public RectTransform mainMenuPanel;
        public RectTransform lobbyPanel;

        public LobbyInfoPanel infoPanel;
        public LobbyCountdownPanel countdownPanel;
        public GameObject addPlayerButton;

        protected RectTransform currentPanel;
        
        public int _gamePlayers;
        
        public Text statusInfo;
        public Text hostInfo;

        //Client numPlayers from NetworkManager is always 0, so we count (throught connect/destroy in LobbyPlayer) the number
        //of players, so that even client know how many player there is.
        [HideInInspector]
        public int _playerNumber = 0;

        //used to disconnect a client properly when exiting the matchmaker
        [HideInInspector]
        public bool _isMatchmaking = false;

        protected bool _disconnectServer = false;
        
        protected ulong _currentMatchID;
        
        private void Start()
        {
            singleton = this;

            currentPanel = mainMenuPanel;
            
            GetComponent<Canvas>().enabled = true;

            DontDestroyOnLoad(gameObject);
            
            showLobbyGUI = false;

            _gamePlayers = 0;
        }

        private void Update()
        {
            Debug.Log(PlayerSpawnsFinished);
        }

        public void RestartManager()
        {
            GameObject.Instantiate(LobbyFallback);
            
            GameObject.Destroy(gameObject);
        }

        public override void OnLobbyClientSceneChanged(NetworkConnection conn)
        {
            if (SceneManager.GetSceneAt(0).name == lobbyScene)
            {
                //if (inGameMenu.InGame)//topPanel.isInGame)
                //{
                //    ChangeTo(lobbyPanel);

                //    if (_isMatchmaking)
                //    {
                //        if (conn.playerControllers[0].unetView.isServer)
                //        {
                //            backDelegate = StopHostClbk;
                //        }
                //        else
                //        {
                //            backDelegate = StopClientClbk;
                //        }
                //    }
                //    else
                //    {
                //        if (conn.playerControllers[0].unetView.isServer)
                //        {
                //            backDelegate = StopHostClbk;
                //        }
                //        else
                //        {
                //            backDelegate = StopClientClbk;
                //        }
                //    }
                //}
                //else
                //{
                //    ChangeTo(mainMenuPanel);
                //}

                //None of the code here runs (I think)

                if (conn.playerControllers[0].unetView.isServer)
                {
                    backDelegate = StopHostClbk;
                }
                else
                {
                    backDelegate = StopClientClbk;
                }

                ChangeTo(mainMenuPanel);

                TurnOffInGameMenu();

                RestartManager();

                //End of non running code

                //topPanel.ToggleVisibility(true);
                //topPanel.isInGame = false;

                //inGameMenu.InGame = false;
                //inGameMenu.gameObject.SetActive(false);
            }
            else
            {
                ChangeTo(null);

                Destroy(GameObject.Find("MainMenuUI(Clone)"));

                TurnOnInGameMenu();
                //backDelegate = StopGameClbk;
                //topPanel.isInGame = true;
                //inGameMenu.InGame = true;
                //inGameMenu.gameObject.SetActive(true);

                //topPanel.ToggleVisibility(false);
                //inGameMenu.SetVisibility(false);

                //NetworkServer.SpawnWithClientAuthority(Camera, conn);
            }
        }

        public override void OnLobbyServerSceneChanged(string sceneName)
        {
            base.OnLobbyServerSceneChanged(sceneName);
            
            if (sceneName == this.playScene)
            {
                GameObject spawned = Instantiate(spawnPrefabs[0], new Vector3(0, 3, 0), Quaternion.identity);
                NetworkServer.Spawn(spawned);

                StartCoroutine(WaitForPlayersToJoin(() =>
                {
                    GameObject toSpawn = Instantiate(spawnPrefabs[1]);
                    NetworkServer.Spawn(toSpawn);

                    GameObject toSpawn2 = Instantiate(spawnPrefabs[2]);
                    NetworkServer.Spawn(toSpawn2);
                }));

                TurnOnInGameMenu();
            }
            else if(sceneName == this.lobbyScene)
            {
                TurnOffInGameMenu();
                
                RestartManager();
            }
        }

        private IEnumerator WaitForPlayersToJoin(Action todo)
        {
            var lobbyPlayerCount = lobbySlots
                .Where(slot => slot != null)
                .Count();
            
            while (lobbyPlayerCount > _gamePlayers)
            {
                Debug.Log("Players waiting: " + (lobbyPlayerCount - _gamePlayers));

                yield return null;
            }

            Debug.Log("Spawning. . .");

            todo.Invoke();
        }

        public void ChangeTo(RectTransform newPanel)
        {
            if (currentPanel != null)
            {
                currentPanel.gameObject.SetActive(false);
            }

            if (newPanel != null)
            {
                newPanel.gameObject.SetActive(true);
            }

            currentPanel = newPanel;

            if (currentPanel != mainMenuPanel)
            {
                _isMatchmaking = true;
            }
            else
            {
                _isMatchmaking = false;
                
                //RestartManager();
            }
        }

        public void DisplayIsConnecting()
        {
            var _this = this;
            infoPanel.Display("Connecting...", "Cancel", () => { _this.backDelegate(); });
        }

        public delegate void BackButtonDelegate();
        public BackButtonDelegate backDelegate;

        public void GoBackButton()
        {
            backDelegate();
        }

        // ----------------- Server management

        public void AddLocalPlayer()
        {
            TryToAddPlayer();
        }

        public void RemovePlayer(LobbyPlayer player)
        {
            player.RemovePlayer();
        }

        public void SimpleBackClbk()
        {
            ChangeTo(mainMenuPanel);

            TurnOffInGameMenu();
        }
                 
        public void StopHostClbk()
        {
            if (_isMatchmaking)
            {
				matchMaker.DestroyMatch((NetworkID)_currentMatchID, 0, OnDestroyMatch);
				_disconnectServer = true;
            }
            else
            {
                StopHost();
            }
            
            ChangeTo(mainMenuPanel);

            RestartManager();
        }

        public void StopClientClbk()
        {
            StopClient();

            if (_isMatchmaking)
            {
                StopMatchMaker();
            }

            ChangeTo(mainMenuPanel);

            TurnOffInGameMenu();

            RestartManager();
        }

        public void StopServerClbk()
        {
            StopServer();
            ChangeTo(mainMenuPanel);

            TurnOffInGameMenu();

            RestartManager();
        }

        private void TurnOnInGameMenu()
        {
            inGameMenu.gameObject.SetActive(true);
            inGameMenu.InGame = true;
            inGameMenu.SetVisibility(false);
            topPanel.gameObject.SetActive(false);

            Cursor.lockState = CursorLockMode.Locked;
            Cursor.visible = false;
        }
        
        private void TurnOffInGameMenu()
        {
            inGameMenu.InGame = false;
            inGameMenu.SetVisibility(false);
            inGameMenu.gameObject.SetActive(false);
            topPanel.gameObject.SetActive(true);

            Cursor.lockState = CursorLockMode.None;
            Cursor.visible = true;
        }

        class KickMsg : MessageBase { }

        public void KickPlayer(NetworkConnection conn)
        {
            conn.Send(MsgKicked, new KickMsg());
        }
        
        public void KickedMessageHandler(NetworkMessage netMsg)
        {
            infoPanel.Display("Kicked by Server", "Close", null);
            netMsg.conn.Disconnect();
            RestartManager();
        }
        
        public void QuitButtonCallback()
        {
            StopClientClbk();
        }
        
        //===================

        public override void OnStartHost()
        {
            base.OnStartHost();

            ChangeTo(lobbyPanel);
            backDelegate = StopHostClbk;
        }

		public override void OnMatchCreate(bool success, string extendedInfo, MatchInfo matchInfo)
		{
			base.OnMatchCreate(success, extendedInfo, matchInfo);

            _currentMatchID = (System.UInt64)matchInfo.networkId;
		}

		public override void OnDestroyMatch(bool success, string extendedInfo)
		{
			base.OnDestroyMatch(success, extendedInfo);
			if (_disconnectServer)
            {
                StopMatchMaker();
                StopHost();
                RestartManager();
            }
        }

        //allow to handle the (+) button to add/remove player
        public void OnPlayersNumberModified(int count)
        {
            _playerNumber += count;

            int localPlayerCount = 0;
            foreach (PlayerController p in ClientScene.localPlayers)
                localPlayerCount += (p == null || p.playerControllerId == -1) ? 0 : 1;

            addPlayerButton.SetActive(localPlayerCount < maxPlayersPerConnection && _playerNumber < maxPlayers);
        }

        // ----------------- Server callbacks ------------------

        public override bool OnLobbyServerSceneLoadedForPlayer(GameObject lobbyPlayer, GameObject gamePlayer)
        {
            base.OnLobbyServerSceneLoadedForPlayer(lobbyPlayer, gamePlayer);

            _gamePlayers++;
            
            var stats = gamePlayer.GetComponent<PlayerStats>();
            var lobbyPlayerComponent = lobbyPlayer.GetComponent<LobbyPlayer>();

            stats.PlayerName = lobbyPlayerComponent.nameInput.text;

            StartCoroutine(this.WaitForCondition(
                waitUntilTrue: lobbyManager =>
                {
                    var playerIdentity = gamePlayer.GetComponent<NetworkIdentity>();

                    var lobbyPlayers = lobbyManager.lobbySlots
                        .Where(slot => slot != null)
                        .Count();

                    var spawnedPlayerCount = NetworkServer.objects
                        .Select(obj => obj.Value.gameObject)
                        .Where(gameObject => gameObject.tag == "Player")
                        .Count();

                    var observerCount = playerIdentity != null && playerIdentity.observers != null
                        ? playerIdentity.observers.Count
                        : 0;
                                      
                    return lobbyPlayers == spawnedPlayerCount && observerCount == spawnedPlayerCount;
                },
                whenConditionTrue: () => 
                {
                    stats.PlayerColor = lobbyPlayerComponent.playerColor;
                }));
            
            return true;
        }
        
        //we want to disable the button JOIN if we don't have enough player
        //But OnLobbyClientConnect isn't called on hosting player. So we override the lobbyPlayer creation
        public override GameObject OnLobbyServerCreateLobbyPlayer(NetworkConnection conn, short playerControllerId)
        {
            GameObject obj = Instantiate(lobbyPlayerPrefab.gameObject) as GameObject;

            LobbyPlayer newPlayer = obj.GetComponent<LobbyPlayer>();
            newPlayer.ToggleJoinButton(numPlayers + 1 >= minPlayers);


            for (int i = 0; i < lobbySlots.Length; ++i)
            {
                LobbyPlayer p = lobbySlots[i] as LobbyPlayer;

                if (p != null)
                {
                    p.RpcUpdateRemoveButton();
                    p.ToggleJoinButton(numPlayers + 1 >= minPlayers);
                }
            }

            return obj;
        }
        
        public override void OnLobbyServerPlayerRemoved(NetworkConnection conn, short playerControllerId)
        {
            base.OnLobbyServerPlayerRemoved(conn, playerControllerId);

            for (int i = 0; i < lobbySlots.Length; ++i)
            {
                LobbyPlayer p = lobbySlots[i] as LobbyPlayer;

                if (p != null)
                {
                    p.RpcUpdateRemoveButton();
                    p.ToggleJoinButton(numPlayers + 1 >= minPlayers);
                }
            }
        }

        public override void OnLobbyServerDisconnect(NetworkConnection conn)
        {
            base.OnLobbyServerDisconnect(conn);

            for (int i = 0; i < lobbySlots.Length; ++i)
            {
                LobbyPlayer p = lobbySlots[i] as LobbyPlayer;

                if (p != null)
                {
                    p.RpcUpdateRemoveButton();
                    p.ToggleJoinButton(numPlayers >= minPlayers);
                    p.connectionToClient.Disconnect();
                }
            }

            NetworkServer.Shutdown();
            RestartManager();
        }

        public override void OnLobbyClientConnect(NetworkConnection conn)
        {
            base.OnLobbyClientConnect(conn);
        }

        // --- Countdown management

        public override void OnLobbyServerPlayersReady()
        {
			bool allready = true;
			for(int i = 0; i < lobbySlots.Length; ++i)
			{
				if(lobbySlots[i] != null)
					allready &= lobbySlots[i].readyToBegin;
			}

			if(allready)
				StartCoroutine(ServerCountdownCoroutine());
        }

        public IEnumerator ServerCountdownCoroutine()
        {
            float remainingTime = prematchCountdown;
            int floorTime = Mathf.FloorToInt(remainingTime);

            while (remainingTime > 0)
            {
                yield return null;

                remainingTime -= Time.deltaTime;
                int newFloorTime = Mathf.FloorToInt(remainingTime);

                if (newFloorTime != floorTime)
                {//to avoid flooding the network of message, we only send a notice to client when the number of plain seconds change.
                    floorTime = newFloorTime;

                    for (int i = 0; i < lobbySlots.Length; ++i)
                    {
                        if (lobbySlots[i] != null)
                        {//there is maxPlayer slots, so some could be == null, need to test it before accessing!
                            (lobbySlots[i] as LobbyPlayer).RpcUpdateCountdown(floorTime);
                        }
                    }
                }
            }

            for (int i = 0; i < lobbySlots.Length; ++i)
            {
                if (lobbySlots[i] != null)
                {
                    (lobbySlots[i] as LobbyPlayer).RpcUpdateCountdown(0);
                }
            }

            ServerChangeScene(playScene);
        }

        // ----------------- Client callbacks ------------------

        public override void OnMatchJoined(bool success, string extendedInfo, MatchInfo matchInfo)
        {
            base.OnMatchJoined(success, extendedInfo, matchInfo);

            if(success)
            {
                mainMenuPanel.GetComponent<LobbyMainMenu>().FoundMatch = true;

                if (!NetworkServer.active)
                {//only to do on pure client (not self hosting client)
                    ChangeTo(lobbyPanel);
                    backDelegate = StopClientClbk;
                    //SetServerInfo("Client", networkAddress);
                }
            }
        }

        public override void OnClientConnect(NetworkConnection conn)
        {
            base.OnClientConnect(conn);
            
            infoPanel.gameObject.SetActive(false);

            conn.RegisterHandler(MsgKicked, KickedMessageHandler);

            if (!NetworkServer.active)
            {//only to do on pure client (not self hosting client)
                ChangeTo(lobbyPanel);
                backDelegate = StopClientClbk;
                //SetServerInfo("Client", networkAddress);
            }
        }

        public override void OnClientDisconnect(NetworkConnection conn)
        {
            base.OnClientDisconnect(conn);

            RestartManager();
        }

        public override void OnClientError(NetworkConnection conn, int errorCode)
        {
            base.OnClientError(conn, errorCode);

            RestartManager();
        } 
    }
}