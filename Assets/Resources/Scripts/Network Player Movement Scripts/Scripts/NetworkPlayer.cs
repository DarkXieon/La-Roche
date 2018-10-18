using System;
using System.Collections;
using System.Linq;
using PlayerManager;
using Prototype.NetworkLobby;
using UnityEngine;
using UnityEngine.Networking;

public class NetworkPlayer : NetworkMessageHandler
{
    public static int TotalPlayers = 0;
    public static int TotalReady = 0;
    
    public bool Ready;

    public string playerID;
    
    //public bool canSendNetworkMovement;
    public float networkSendRate = 5;
    public float timeBetweenMovementStart;
    public float timeBetweenMovementEnd;
    
    public bool isLerpingPosition;
    public bool isLerpingRotation;
    public Vector3 realPosition;
    public Quaternion realRotation;
    public Vector3 lastRealPosition;
    public Quaternion lastRealRotation;
    public float timeStartedLerping;
    public float timeToLerp;

    public bool isLerpingPositionBall;
    public bool isLerpingRotationBall;
    public Vector3 realPositionBall;
    public Quaternion realRotationBall;
    public Vector3 lastRealPositionBall;
    public Quaternion lastRealRotationBall;
    public float timeStartedLerpingBall;
    public float timeToLerpBall;
    
    private NetworkIdentity ball;
    private bool initialStart = false;
    private short clientToServerMessageNumber
    {
        get
        {
            return (short)(movement_msg + Convert.ToInt16(netId.Value) + Convert.ToInt16(1));
        }
    }
    //private short serverToClientMessageNumber
    //{
    //    get
    //    {
    //        return (short)(movement_msg - Convert.ToInt16(netId.Value) - Convert.ToInt16(1));
    //    }
    //}
    
    private short GetServerToClientMessageNumber(int id)
    {
        return (short)(movement_msg - Convert.ToInt16(id) - Convert.ToInt16(1));
    }

    private void Start()
    {
        if (isLocalPlayer || gameObject.tag == "Ball")
        {
            Ready = true;

            CmdSetReady();
        }
    }

    [Command]
    private void CmdSetReady()
    {
        Ready = true;
    }
    
    [ClientRpc]
    public void RpcSetReadyToContinue(int totalPlayers)
    {
        TotalPlayers = totalPlayers;
        TotalReady = totalPlayers;
    }

    [Server]
    public static void InitializeServerPlayers()
    {
        var networkPlayers = NetworkServer
            .objects
            .Values
            .Select(obj => obj.GetComponent<NetworkPlayer>())
            .Where(obj => obj != null)
            .ToList();

        int totalPlayers = networkPlayers.Count();

        TotalPlayers = totalPlayers;

        foreach (NetworkPlayer player in networkPlayers)
        {
            TotalReady++;

            player.RegisterAllMessages();
            
            Manager.Instance.AddPlayerToConnectedPlayers(player.name, player.gameObject);
            
            player.isLerpingPosition = false;
            player.isLerpingRotation = false;

            player.realPosition = player.transform.position;
            player.realRotation = player.transform.rotation;
        }

        if(TotalPlayers == TotalReady)
        {
            foreach (NetworkPlayer player in networkPlayers)
            {
                TotalReady = TotalPlayers;

                player.RpcSetReadyToContinue(TotalPlayers);
            }
        }

        foreach (NetworkPlayer player in networkPlayers)
        {
            player.WaitForCondition(
               waitUntilTrue: lobby =>
               {
                    bool all = NetworkServer.objects
                        .Select(obj => obj.Value.gameObject)
                        .Where(obj => obj.tag == "Player")// || obj.tag == "Ball")
                        .All(obj => obj.GetComponent<NetworkPlayer>().Ready);

                   Debug.Log("WaitForCondition is returning " + all);

                   return all && TotalPlayers == TotalReady;
               },
               whenConditionTrue: () =>
               {
                   player.RpcInitializeClient();
               });
        }
    }
    
    [Server]
    public void RegisterAllMessages()
    {
        playerID = transform.tag + netId.ToString();
        transform.name = playerID;

        NetworkServer.RegisterHandler(clientToServerMessageNumber, OnServerReceiveMovementMessage);

        ////should always be true
        //if (!Manager.Instance.ClientToServerMove.ContainsKey(transform.name))
        //    Manager.Instance.ClientToServerMove.Add(transform.name, OnServerReceiveMovementMessage);

        RpcRenameClients();
        RpcRegisterAllClientMessages();// netId.Value);
    }

    private void ReturnReaderTo(uint position, NetworkReader reader)
    {
        reader.SeekZero();
        reader.ReadBytes((int)position);
    }

    [Server]
    private void OnServerReceiveMovementMessage(NetworkMessage _message)
    {
        uint returnTo = _message.reader.Position;

        PlayerMovementMessage _msg = _message.ReadMessage<PlayerMovementMessage>();

        ReturnReaderTo(returnTo, _message.reader);

        foreach (NetworkConnection conn in NetworkServer.connections)
        {
            int currentId = conn.connectionId;
            short messageType = GetServerToClientMessageNumber(currentId);

            NetworkServer.SendToClient(currentId, messageType, _msg);

            //conn.Send(GetServerToClientMessageNumber(currentId), );
        }

        //NetworkServer.SendToAll(serverToClientMessageNumber, _msg);
    }

    [ClientRpc]
    private void RpcRegisterAllClientMessages()//uint id)
    {
        //if (isServer)
        //    NetworkServer.RegisterHandler(movement_msg + 1, OnServerReceiveMovementMessage);

        if (isLocalPlayer)
        {
            int connectionId = LobbyManager.singleton.client.connection.connectionId;
            short messageType = GetServerToClientMessageNumber(connectionId);
            //NetworkServer.RegisterHandler(movement_msg + 1, OnServerReceiveMovementMessage);
            LobbyManager.singleton.client.RegisterHandler(MyMessageTypes.PlayerFullyLoaded, InitializeClient);
            LobbyManager.singleton.client.RegisterHandler(messageType, OnPlayerReceiveMovementMessage);
        }

        //if (!Manager.Instance.PlayerFullyLoadedEvents.ContainsKey(transform.name))
        //    Manager.Instance.PlayerFullyLoadedEvents.Add(transform.name, InitializeClient);

        //if (!Manager.Instance.ServerToClientMove.ContainsKey(transform.name))
        //    Manager.Instance.ServerToClientMove.Add(transform.name, OnPlayerReceiveMovementMessage);
    }
    
    [ClientRpc]
    private void RpcRenameClients()
    {
        playerID = transform.tag + netId.ToString();
        transform.name = playerID;

        if(isLocalPlayer)
            Manager.Instance.SetLocalPlayerID(playerID);
        
        if (!Manager.Instance.ConnectedPlayers.ContainsKey(transform.name))
            Manager.Instance.ConnectedPlayers.Add(transform.name, gameObject);
    }

    [ClientRpc]
    private void RpcInitializeClient()
    {
        ball = FindObjectsOfType<NetworkIdentity>().Single(obj => obj.tag == "Ball");

        initialStart = true;
    }

    [Client]
    private void InitializeClient(NetworkMessage message)
    {
        //test code
        isLerpingPosition = false;
        isLerpingRotation = false;

        realPosition = transform.position;
        realRotation = transform.rotation;
        //end test code

        Debug.Log("Recieved Message " + transform.name);
        
        //var loadedMessage = message.ReadMessage<PlayersFullyLoadedMessage>();

        //should always happen instantly
        //StartCoroutine(Wait(() =>
        //{
        this.WaitForCondition(player => TotalPlayers == TotalReady, () =>
               //NetworkServer.handlers.ContainsKey(movement_msg), () =>
               {
                   Debug.Log("Found Handler " + transform.name);

                   //canSendNetworkMovement = false;

                   //if (transform.tag == "Player")
                   //    StartCoroutine(SendPositionUpdatesTest());

                   //this.WaitForCondition(player => NetworkServer.objects.Values.Single(obj => obj.tag == "Ball") != null, () => { ball = NetworkServer.objects.Values.Single(obj => obj.tag == "Ball"); initialStart = true; });

                   //ball = NetworkServer.objects.Values.Single(obj => obj.tag == "Ball");

                   ball = FindObjectsOfType<NetworkIdentity>().Single(obj => obj.tag == "Ball");

                   initialStart = true;
               });
        //}));
    }

    [Client]
    private IEnumerator Wait(Action todo)
    {
        yield return new WaitForSecondsRealtime(.5f);

        todo.Invoke();
    }

    [Client]
    private void OnPlayerReceiveMovementMessage(NetworkMessage _message)
    {
        PlayerMovementMessage _msg = _message.ReadMessage<PlayerMovementMessage>();

        if(_msg.objectTransformName == "Ball" && !ball.hasAuthority)
        {
            ReceiveBallMessage(_msg.objectPosition, _msg.objectRotation, _msg.time);
        }
        if(_msg.objectTransformName != transform.name && _msg.objectTransformName != "Ball")
        {
            if(!Manager.Instance.ConnectedPlayers.Keys.Contains(_msg.objectTransformName))
            {
                foreach(GameObject player in Manager.Instance.ConnectedPlayers.Values)
                {
                    CmdDebugLogging(player.name);
                }

                CmdDebugLogging(_msg.objectTransformName);
            }

            Manager.Instance.ConnectedPlayers[_msg.objectTransformName].GetComponent<NetworkPlayer>().ReceiveMovementMessage(_msg.objectPosition, _msg.objectRotation, _msg.time);
        }
    }

    [Command]
    private void CmdDebugLogging(string stuff)
    {
        Debug.LogWarning(stuff);
    }

    [Client]
    public void ReceiveMovementMessage(Vector3 _position, Quaternion _rotation, float _timeToLerp)
    {
        lastRealPosition = realPosition;
        lastRealRotation = realRotation;
        realPosition = _position;
        realRotation = _rotation;
        timeToLerp = _timeToLerp;

        if(realPosition != transform.position)
        //if(!Mathf.Approximately(realPosition.x, transform.position.x) || !Mathf.Approximately(realPosition.y, transform.position.y) || !Mathf.Approximately(realPosition.z, transform.position.z))
        {
            isLerpingPosition = true;
        }

        if(realRotation.eulerAngles != transform.rotation.eulerAngles)
        {
            isLerpingRotation = true;
        }

        timeStartedLerping = Time.time;
    }

    [Client]
    public void ReceiveBallMessage(Vector3 _position, Quaternion _rotation, float _timeToLerp)
    {
        lastRealPositionBall = realPositionBall;
        lastRealRotationBall = realRotationBall;
        realPositionBall = _position;
        realRotationBall = _rotation;
        timeToLerpBall = _timeToLerp;

        if (realPositionBall != ball.transform.position)
        //if(!Mathf.Approximately(realPosition.x, transform.position.x) || !Mathf.Approximately(realPosition.y, transform.position.y) || !Mathf.Approximately(realPosition.z, transform.position.z))
        {
            isLerpingPositionBall = true;
        }

        if (realRotationBall.eulerAngles != ball.transform.rotation.eulerAngles)
        {
            isLerpingRotationBall = true;
        }

        timeStartedLerpingBall = Time.time;
    }
    //[Client]
    //private IEnumerator SendPositionUpdates()
    //{
    //    Debug.LogWarning(transform.name);

    //    yield return new WaitForSecondsRealtime(5f);

    //    Debug.Assert(!canSendNetworkMovement);

    //    canSendNetworkMovement = true;

    //    while (LobbyManager.singleton.inGameMenu.enabled == true)
    //    {
    //        timeBetweenMovementStart = Time.time;
    //        yield return new WaitForSeconds((1 / networkSendRate));
    //        SendNetworkMovement();
    //    }

    //    canSendNetworkMovement = false;
    //}

    [Client]
    private void SendNetworkMovement()
    {
        timeBetweenMovementEnd = Time.time;
        SendMovementMessage(playerID, transform.position, transform.rotation, (timeBetweenMovementEnd - timeBetweenMovementStart));

        if(ball.hasAuthority)
        {
            timeBetweenMovementEnd = Time.time;
            SendMovementMessage(ball.tag, ball.transform.position, ball.transform.rotation, (timeBetweenMovementEnd - timeBetweenMovementStart));
        }
    }

    [Client]
    public void SendMovementMessage(string _playerID, Vector3 _position, Quaternion _rotation, float _timeTolerp)
    {
        PlayerMovementMessage _msg = new PlayerMovementMessage()
        {
            objectPosition = _position,
            objectRotation = _rotation,
            objectTransformName = _playerID,
            time = _timeTolerp
        };

        var test = NetworkManager.singleton.client.handlers;

        NetworkManager.singleton.client.Send(clientToServerMessageNumber, _msg);
    }
    private void FixedUpdate()
    {
        if(initialStart && !hasAuthority)
        {
            NetworkLerp();
        }
        if(initialStart && !ball.hasAuthority)
        {
            NetworkLerpBall();
        }
    }
    
    private void NetworkLerp()
    {
        if(isLerpingPosition)
        {
            float lerpPercentage = (Time.time - timeStartedLerping) / timeToLerp;

            transform.position = Vector3.Lerp(lastRealPosition, realPosition, lerpPercentage);
        }

        if(isLerpingRotation)
        {
            float lerpPercentage = (Time.time - timeStartedLerping) / timeToLerp;

            transform.rotation = Quaternion.Lerp(lastRealRotation, realRotation, lerpPercentage);
        }
    }
    
    private void NetworkLerpBall()
    {
        if (isLerpingPositionBall)
        {
            float lerpPercentage = (Time.time - timeStartedLerpingBall) / timeToLerpBall;

            ball.transform.position = Vector3.Lerp(lastRealPositionBall, realPositionBall, lerpPercentage);
        }

        if (isLerpingRotationBall)
        {
            float lerpPercentage = (Time.time - timeStartedLerpingBall) / timeToLerpBall;

            ball.transform.rotation = Quaternion.Lerp(lastRealRotationBall, realRotationBall, lerpPercentage);
        }
    }

    /////////////////////////Test Methods

    //[Client]
    //public Coroutine StartSendingUpdatesTest()
    //{
    //    return StartCoroutine(SendPositionUpdatesTest());
    //}

    //private IEnumerator SendPositionUpdatesTest()
    //{
    //    canSendNetworkMovement = true;

    //    while (canSendNetworkMovement)
    //    {
    //        timeBetweenMovementStart = Time.time;
    //        yield return new WaitForSeconds((1 / networkSendRate));
    //        SendNetworkMovementTest();
    //    }
    //}

    [Client]
    private void SendNetworkMovementTest()
    {
        timeBetweenMovementEnd = Time.time;

        CmdOnServerReceiveMovementMessageTest(playerID, transform.position, transform.rotation, (timeBetweenMovementEnd - timeBetweenMovementStart));

        //if(isServer)
        //    OnServerReceiveMovementMessageTest(playerID, transform.position, transform.rotation, (timeBetweenMovementEnd - timeBetweenMovementStart));
        //else
        //    CmdOnServerReceiveMovementMessageTest(playerID, transform.position, transform.rotation, (timeBetweenMovementEnd - timeBetweenMovementStart));
    }
    
    [Server]
    private void OnServerReceiveMovementMessageTest(string playerID, Vector3 position, Quaternion rotation, float timeTolerp)
    {
        if (!hasAuthority)
            Manager.Instance.ConnectedPlayers[playerID].GetComponent<NetworkPlayer>().ReceiveMovementMessage(position, rotation, timeTolerp);

        RpcOnPlayerReceiveMovementMessageTest(playerID, position, rotation, timeTolerp);
    }

    [Command]
    private void CmdOnServerReceiveMovementMessageTest(string playerID, Vector3 position, Quaternion rotation, float timeTolerp)
    {
        OnServerReceiveMovementMessageTest(playerID, transform.position, transform.rotation, timeTolerp);
    }
    
    [ClientRpc]
    private void RpcOnPlayerReceiveMovementMessageTest(string playerID, Vector3 position, Quaternion rotation, float timeTolerp)
    {
        if (!hasAuthority)
        {
            //CmdDebugInitRecieved();
            //Debug.LogError("Test");

            Manager.Instance.ConnectedPlayers[playerID].GetComponent<NetworkPlayer>().ReceiveMovementMessage(position, rotation, timeTolerp);
        }
    }

    [Command]
    private void CmdDebugInitRecieved()
    {
        Debug.Log(transform.name + " recieving position updates!!!");
    }

    bool currentlySending = false;
    
    [Client]
    private void Update()
    {
        bool isBeingHeld = transform.parent != null;

        if (isBeingHeld)
            Debug.Log("Player Holding Ball hasAuthority is: " + hasAuthority);

        var test = this;
        var test2 = NetworkServer.handlers;
        var test3 = LobbyManager.singleton.client.handlers;

        if (initialStart && hasAuthority && !currentlySending)
        {
            CmdDebugInit();

            //canSendNetworkMovement = true;
            StartCoroutine(StartNetworkSendCooldownTest());
        }
        else
        {
            //canSendNetworkMovement = false;
        }
    }

    [Command]
    private void CmdDebugInit()
    {
        Debug.Log(transform.name + " sending position updates!!!");
    }

    [Client]
    private IEnumerator StartNetworkSendCooldownTest()
    {
        currentlySending = true;
        timeBetweenMovementStart = Time.time;
        yield return new WaitForSeconds((1 / networkSendRate));
        SendNetworkMovement();
        currentlySending = false;
        //SendNetworkMovementTest();
    }

    //public override void OnStartAuthority()
    //{
    //    base.OnStartAuthority();

    //    canSendNetworkMovement = true;
    //}

    //public override void OnStopAuthority()
    //{
    //    base.OnStopAuthority();

    //    canSendNetworkMovement = false;
    //}
}