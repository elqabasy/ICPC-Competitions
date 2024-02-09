#include <iostream>
using namespace std;

/* A - Star
    next prize = 
*/

void PRO_A(){
    // input
    unsigned int X = 0; cin >> X;


    // process
    if(X % 100 == 0){
        cout << 100 << endl;
    }else{
        cout << 100 - (X % 100) << endl;
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // PRO_A
    PRO_A();
    return 0;
}
