#include <iostream>
using namespace std;

void PRO_A(){
    // input
    int t = 0; cin >> t;
    // process
    for(int x = 0; x < t; x++){
        int n = 0, m = 0; cin >> n >> m;
        cout << max(n, m) << endl;
    }

    // output
}

int main(){
    // PRO_A
    PRO_A();
    
    return 0;
}


/*
3
2 2 OUTPUT 2
5 7 OUTPUT 7
3 2 OUTPUT 3

finally it want the max number between tow numbers

*/