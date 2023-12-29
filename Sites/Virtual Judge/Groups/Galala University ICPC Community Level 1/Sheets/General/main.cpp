#include <set>
#include <list>
#include <iostream>
using namespace std;

void PRO_C(){
    // input
    string username; cin >> username;
    set<char> setChar;


    // process
    for(int x = 0; x < username.size(); x++){
        setChar.insert(username[x]);
    }

    // output
    // cout << setChar.size() << " " << username.size() << endl;
    if(setChar.size() % 2 != 0){
        cout << "IGNORE HIM!" << endl;
    }else{
        cout << "CHAT WITH HER!" << endl;
    }
}
#include <unordered_set>

int main(){
    // PRO_C
    // PRO_C();
    unordered_set<int> x = {};

    for(auto c : x){
        cout << c << endl;
    }
    // cout << x << endl;
    return 0;
}