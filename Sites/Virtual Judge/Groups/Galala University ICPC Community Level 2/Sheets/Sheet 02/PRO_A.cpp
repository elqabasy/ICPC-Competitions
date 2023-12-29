#include <regex>
#include <iostream>
using namespace std;

void PRO_A(){
    // input
    int t = 0; cin >> t;



    // process
    for(int x = 0; x < t; x++){
        int n = 0; cin >> n;
        string data; cin >> data;

        regex rg("^[mM]+[eE]+[oO]+[wW]+$");
        bool state = regex_match(data, rg);


        // output
        if(state == true){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
    }

    // output
}

int main(){
    // PRO_A
    PRO_A();

    return 0;
}
/*
MEO: 'm', 'e', 'o' and 'w'
*/