#include <iostream>
using namespace std;

void PRO_B(){
    // input
    string s, t; cin >> s >> t;

    // process
    //  0  1  2  3
    // {1, 2, 3, 4}
    bool state = true;
    for(int x = 0; x < s.length(); x++){
        if(!(s[x] == t[(s.length()-1) - x])){
            state = false;
        }
    }


    // output
    if(state == true){
        cout << "YES" << endl;

    }else{
        cout << "NO" << endl;
    }
}

int main(){
    // PRO_B
    PRO_B();

    return 0;
}