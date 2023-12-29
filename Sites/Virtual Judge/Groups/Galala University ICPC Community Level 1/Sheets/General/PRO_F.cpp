#include <iostream>
using namespace std;

void PRO_F(){
    // input
    char C; cin >> C;

    // process
    if(int(C) >= 97 && int(C) < 122){
        cout << char(int(C) + 1) << endl;
    }

    // output
}

int main(){
    // PRO_F
    PRO_F();

    return 0;
}