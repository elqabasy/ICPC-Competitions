#include <iostream>
using namespace std;


#define ll long long

void PRO_A(){
    // input
    unsigned short int testCases = 0, pathSize = 0, maxCoins = 0; cin >> testCases;
    string pathValue, thorns;
    // process
    for(int x = 0; x < testCases; x++){
        cin >> pathSize >> pathValue;
        string stop = pathValue.substr(0, pathValue.find("**"));
        maxCoins = 0;
        for(int z = 0; z < stop.size(); z++){
            if(stop[z] == '@'){
                maxCoins++;
            }
        }
        cout << maxCoins << endl;
    }
    /*
        The character '.' denotes an empty cell, 
        '@' denotes a cell with a coin, 
        '*' denotes a cell with thorns. 
        It is guaranteed that the first cell is empty.
        Max move is 2 squares
    */
    // output
}

int main(){
    // settings for preformance
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // PRO_A
    PRO_A();
    return 0;
}