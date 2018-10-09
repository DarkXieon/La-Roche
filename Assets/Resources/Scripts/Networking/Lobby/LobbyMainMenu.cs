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
    public RectTransform lobbyServerList;
    public Text matchNameInput;

    [NonSerialized] public bool FoundMatch;
    
    public void OnClickHost()
    {
        LobbyManager.singleton.StartHost();
    }

    public void OnClickJoin()
    {
        LobbyManager.singleton.ChangeTo(lobbyPanel);

        //LobbyManager.singleton.networkAddress = ipInput.text;
        LobbyManager.singleton.StartClient();

        LobbyManager.singleton.backDelegate = LobbyManager.singleton.StopClientClbk;
        LobbyManager.singleton.DisplayIsConnecting();

        //LobbyManager.singleton.SetServerInfo("Connecting...", LobbyManager.singleton.networkAddress);
    }

    public void OnClickDedicated()
    {
        LobbyManager.singleton.ChangeTo(null);
        LobbyManager.singleton.StartServer();

        LobbyManager.singleton.backDelegate = LobbyManager.singleton.StopServerClbk;

        //LobbyManager.singleton.SetServerInfo("Dedicated Server", LobbyManager.singleton.networkAddress);
    }

    public void OnClickCreateMatchmakingGame()
    {
        LobbyManager.singleton.StartMatchMaker();
        LobbyManager.singleton.matchMaker.CreateMatch(
            matchNameInput.text,
            (uint)LobbyManager.singleton.maxPlayers,
            true,
            "", "", "", 0, 0,
            LobbyManager.singleton.OnMatchCreate);

        LobbyManager.singleton.backDelegate = LobbyManager.singleton.StopHost;
        LobbyManager.singleton._isMatchmaking = true;
        LobbyManager.singleton.DisplayIsConnecting();

        //LobbyManager.singleton.SetServerInfo("Matchmaker Host", LobbyManager.singleton.matchHost);
    }

    public void OnClickOpenServerList()
    {
        LobbyManager.singleton.StartMatchMaker();
        LobbyManager.singleton.backDelegate = LobbyManager.singleton.SimpleBackClbk;
        LobbyManager.singleton.ChangeTo(lobbyServerList);
    }

    void onEndEditIP(string text)
    {
        if (Input.GetKeyDown(KeyCode.Return))
        {
            OnClickJoin();
        }
    }

    void onEndEditGameName(string text)
    {
        if (Input.GetKeyDown(KeyCode.Return))
        {
            OnClickCreateMatchmakingGame();
        }
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
    }

    public void RequestJoinMatch()
    {
        LobbyManager.singleton.StartMatchMaker();

        //StartCoroutine(TryListMatches());
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
    
    //private IEnumerator TryListMatches()
    //{
    //    if (LobbyManager.singleton._isMatchmaking)
    //    {
    //        LobbyManager.singleton.StopClientClbk();
    //    }

    //    FoundMatch = false;
    //    bool started = false;

    //    while(!FoundMatch)
    //    {
    //        if (started)
    //        {
    //            StopCoroutine("ListMatches");
    //            StopCoroutine("JoinMatch");
    //        }

    //        LobbyManager.singleton.matchMaker.ListMatches(0, 6, "", true, 0, 0, JoinMatch);

    //        started = true;

    //        Debug.Log("Listing Matches. . .");

    //        yield return new WaitForSeconds(5f);
    //    }
    //}
    
    //private Coroutine JoinMatchWrapper(bool success, string extendedInfo, List<MatchInfoSnapshot> matches)
    //{
    //    bool joined = false;

    //    while (!joined)
    //    {

    //    }

    //    StopCoroutine("JoinMatch");


    //}
}