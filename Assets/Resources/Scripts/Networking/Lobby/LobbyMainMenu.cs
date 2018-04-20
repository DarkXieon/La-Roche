using UnityEngine;
using UnityEngine.UI;
using System.Collections;
using System;
using UnityEngine.Networking;
using UnityEngine.Networking.Types;
using UnityEngine.Networking.Match;
using System.Collections.Generic;
using System.Linq;
using Prototype.NetworkLobby;

//Main menu, mainly only a bunch of callback called by the UI (setup throught the Inspector)
public class LobbyMainMenu : MonoBehaviour
{
    public RectTransform lobbyPanel;
    
    private bool _loaded = false;
    
    public void OnEnable()
    {
        //LobbyManager.singleton.topPanel.ToggleVisibility(true);
    }
    
    public void OnClickStartMatch()
    {
        RequestJoinMatch();
    }

    public void HostMatch()
    {
        string lobbyName = Guid.NewGuid().ToString();
        
        LobbyManager.singleton.matchMaker.CreateMatch(
            lobbyName,
            (uint)LobbyManager.singleton.maxPlayers,
            true,
			"", "", "", 0, 0,
			LobbyManager.singleton.OnMatchCreate);

        LobbyManager.singleton.backDelegate = LobbyManager.singleton.StopHost;
        LobbyManager.singleton._isMatchmaking = true;
        LobbyManager.singleton.DisplayIsConnecting();

        //LobbyManager.singleton.SetServerInfo("Matchmaker Host", LobbyManager.singleton.matchHost);
    }

    public void RequestJoinMatch()
    {
        LobbyManager.singleton.StartMatchMaker();

        LobbyManager.singleton.matchMaker.ListMatches(0, 6, "", true, 0, 0, JoinMatch);
    }

    public void JoinMatch(bool success, string extendedInfo, List<MatchInfoSnapshot> matches)
    {
        if(success && matches.Any())
        {
            var matchToJoin = matches.FirstOrDefault(match => match.currentSize < match.maxSize);

            if(matchToJoin != null)
            {
                LobbyManager.singleton.matchMaker.JoinMatch(matchToJoin.networkId, "", "", "", 0, 0, LobbyManager.singleton.OnMatchJoined);
                LobbyManager.singleton.backDelegate = LobbyManager.singleton.StopClientClbk;
                LobbyManager.singleton._isMatchmaking = true;
                LobbyManager.singleton.DisplayIsConnecting();
            }
            else
            {
                HostMatch();
            }
        }
        else
        {
            HostMatch();
        }
    }
}