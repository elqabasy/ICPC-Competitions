#include <map>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


bool compareFirstElement(const vector<int> &a, const vector<int> &b) {
    return a[0] < b[0];
}

void PRO_F(){
    // input
    int playerStrength = 0, dragonsCount = 0; cin >> playerStrength >> dragonsCount;
    
    // process
    vector<vector<int>> data;

    data.clear();
    for(int dragonIndex = 0; dragonIndex < dragonsCount; dragonIndex++){
        int dragonStrength = 0, defeatBonus = 0; cin >> dragonStrength >> defeatBonus;
        data.push_back({dragonStrength, defeatBonus});
    }

    // process
    sort(data.begin(), data.end(), compareFirstElement); // correct result when test

    bool defeated = false;
    for(int dragonIndex = 0; dragonIndex < data.size(); dragonIndex++){
        int dragonStrength = data.at(dragonIndex).at(0);
        int defeatBonus = data.at(dragonIndex).at(1);

        if(playerStrength <= dragonStrength){
            defeated = true;
            break;
        }else{
            playerStrength += defeatBonus;
        }
    }
    // fetch data
    // for(auto val : data){
    //     cout << val.at(0) << " " << val.at(1) << endl;
    // }

    // output
    if(defeated){
        cout << "NO" << endl; // can't go up
    }else{
        cout << "YES" << endl; // vectorious
    }
}


int main(){
    // PRO_F
    PRO_F();

    return 0;
}
/*
levels{
    level{
        dragonStrength, ...
    }
}

*/
    // data = {
    //     {1000, 1000},
    //     {100, 100},
    //     {10, 10},
    //     {1, 1},
    // };


/*
void PRO_F(){
    // input
    int playerStre = 0, dragons = 0; cin >> playerStre >> dragons;
    map<int, int> levels = {};

    // process
    for(int x = 0; x < dragons; x++){
        // sre.     bonus
        int dragonStre = 0, defeatingBonus = 0; cin >> dragonStre >> defeatingBonus;
        levels.insert({dragonStre, defeatingBonus});
    }


    bool loss = false;
    for (const auto &pair : levels) {

        if(playerStre > pair.first){ //
            // get bonus
            playerStre += pair.second;
        }else{
            loss = true;
            break;
        }
    }


    // // output
    // if(loss){
    //     cout << "NO" << endl;
    // }else{
    //     cout << "YES" << endl;
    // }
}
*/
