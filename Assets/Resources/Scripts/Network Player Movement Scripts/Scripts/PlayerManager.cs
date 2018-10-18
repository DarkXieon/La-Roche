using System.Collections.Generic;
using System.Linq;

using Prototype.NetworkLobby;

using UnityEngine;
using UnityEngine.Networking;

namespace PlayerManager
{
    public class Manager
    {
        private static Manager _instance;
        public Dictionary<string, GameObject> ConnectedPlayers { get; set; }
        public Dictionary<string, NetworkMessageDelegate> PlayerFullyLoadedEvents { get; set; }
        public Dictionary<string, NetworkMessageDelegate> ClientToServerMove { get; set; }
        public Dictionary<string, NetworkMessageDelegate> ServerToClientMove { get; set; }

        public int NumberConnectedPlayers { get; private set; }

        public string PlayerID { get; private set; }

        private Manager()
        {
            if (_instance != null)
            {
                return;
            }

            ConnectedPlayers = new Dictionary<string, GameObject>();

            PlayerFullyLoadedEvents = new Dictionary<string, NetworkMessageDelegate>();
            ClientToServerMove = new Dictionary<string, NetworkMessageDelegate>();
            ServerToClientMove = new Dictionary<string, NetworkMessageDelegate>();
            
            //LobbyManager.singleton.client.RegisterHandler(MyMessageTypes.PlayerFullyLoaded, PlayerFullyLoadedEventPipe);
            //NetworkServer.RegisterHandler(NetworkPlayer.movement_msg, ClientToServerMovePipe);
            //LobbyManager.singleton.client.RegisterHandler(NetworkPlayer.movement_msg, ServerToClientMovePipe);

            NumberConnectedPlayers = 0;

            _instance = this;
        }

        public static Manager Instance
        {
            get
            {
                if (_instance == null)
                {
                    new Manager();
                }

                return _instance;
            }
        }

        public void AddPlayerToConnectedPlayers(string _playerID, GameObject _playerObject)
        {
            if (!ConnectedPlayers.ContainsKey(_playerID))
            {
                ConnectedPlayers.Add(_playerID, _playerObject);
                NumberConnectedPlayers++;
            }
        }

        public void RemovePlayerFromConnectedPlayers(string _playerID)
        {
            if (ConnectedPlayers.ContainsKey(_playerID))
            {
                ConnectedPlayers.Remove(_playerID);
                NumberConnectedPlayers--;
            }
        }

        public GameObject[] GetConnectedPlayers()
        {
            return ConnectedPlayers.Values.ToArray();
        }

        public void SetLocalPlayerID(string _playerID)
        {
            PlayerID = _playerID;
        }

        public GameObject GetPlayerFromConnectedPlayers(string _playerID)
        {
            if (ConnectedPlayers.ContainsKey(_playerID))
            {
                return ConnectedPlayers[_playerID];
            }

            return null;
        }

        private void ReturnReaderTo(uint position, NetworkReader reader)
        {
            reader.SeekZero();
            reader.ReadBytes((int)position);
        }

        //public void PlayerFullyLoadedEventPipe(NetworkMessage message)
        //{
        //    //if (message.reader.Position > 4)
        //    //{
        //    //    message.reader.SeekZero();

        //    //    message.reader.ReadBytes(4);
        //    //}

        //    uint returnTo = message.reader.Position;

        //    var readMessage = message.ReadMessage<PlayersFullyLoadedMessage>();

        //    NetworkMessageDelegate messageDelegate;

        //    if(PlayerFullyLoadedEvents.TryGetValue(readMessage.PlayerName, out messageDelegate))
        //    {
        //        ReturnReaderTo(returnTo, message.reader);

        //        messageDelegate.Invoke(message);
        //    }
        //    else
        //    {
        //        Debug.LogWarning("Player name not valid! Name given was " + readMessage.PlayerName);
        //    }
        //}

        //public void ClientToServerMovePipe(NetworkMessage message)
        //{
        //    //if (message.reader.Position > 4)
        //    //{
        //    //    message.reader.SeekZero();

        //    //    message.reader.ReadBytes(4);
        //    //}

        //    uint returnTo = message.reader.Position;

        //    var readMessage = message.ReadMessage<NetworkMessageHandler.PlayerMovementMessage>();

        //    NetworkMessageDelegate messageDelegate;

        //    if (ClientToServerMove.TryGetValue(readMessage.objectTransformName, out messageDelegate))
        //    {
        //        ReturnReaderTo(returnTo, message.reader);

        //        messageDelegate.Invoke(message);
        //    }
        //    else
        //    {
        //        Debug.LogWarning("Player name not valid! Name given was " + readMessage.objectTransformName);
        //    }
        //}

        //public void ServerToClientMovePipe(NetworkMessage message)
        //{
        //    //if (message.reader.Position > 4)
        //    //{
        //    //    message.reader.SeekZero();

        //    //    message.reader.ReadBytes(4);
        //    //}

        //    uint startingPostion = message.reader.Position;

        //    var readMessage = message.ReadMessage<NetworkMessageHandler.PlayerMovementMessage>();

        //    NetworkMessageDelegate messageDelegate;

        //    if (ServerToClientMove.TryGetValue(PlayerID/*readMessage.objectTransformName*/, out messageDelegate))
        //    {
        //        ReturnReaderTo(startingPostion, message.reader);

        //        messageDelegate.Invoke(message);
        //    }
        //    else
        //    {
        //        Debug.LogWarning("Player name not valid! Name given was " + readMessage.objectTransformName);
        //    }
        //}
    }
}
