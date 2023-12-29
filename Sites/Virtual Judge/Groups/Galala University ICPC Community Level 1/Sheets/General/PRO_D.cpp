#include <iostream>
using namespace std;

void PRO_D(){
    // input
    string players; cin >> players;
    bool isDangrous = false;


    // process
    int teamZeroCount = 0, teamOneCount = 0;

    for(int x = 0; x < players.size(); x++){
        if(players[x] == '0'){
            teamOneCount = 0;
            teamZeroCount++;
        }else{
            teamOneCount++;
            teamZeroCount = 0;
        }

        if(teamOneCount >= 7 || teamZeroCount >= 7){
            isDangrous = true;
            break;
        }

    }


    // output
    if(isDangrous){
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }
}

int main(){
    // PRO_D
    PRO_D();

    return 0;
}
    // char currentChar = players[0];
    // int onesCount = 0;
    // int zerosCount = 0;
    // int state = false;
    // for(int x = 0; x < players.size(); x++){
    //     if(count >= 7){
    //         // cout << "YES" << endl;
    //         state = true;
    //         break;
    //     }
    //     if(players[x] == currentChar){
    //         count++;
    //     }else{
    //         count = 0;
    //         currentChar = players[x];
    //     }
    // }
    