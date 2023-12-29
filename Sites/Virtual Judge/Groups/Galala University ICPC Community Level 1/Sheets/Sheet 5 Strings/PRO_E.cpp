#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;


string toUpper(string s){
    string result = "";
    for(char value : s){
        result += toupper(value);
    }

    return result;
}


void PRO_E(){
    int t = 0; cin >> t;


    for(int x = 0; x < t; x++){
        string S; cin >> S;
        S = toUpper(S);
        if(S == "YES"){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
    }
}



int main(){
    // PRO_E
    PRO_E();
    return 0;
}
