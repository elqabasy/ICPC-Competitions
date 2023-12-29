#include <iostream>
using namespace std;

void PRO_H(){
    // input
    int n = 0; cin >> n;

    // process
    for(int x = 1; x <= n; x++){
        if(x % 2 != 0){ // odd
            cout << "I hate ";
        }else{
            cout << "I love ";
        }
        if(x != n){
            cout << "that ";
        }
    }
    cout << "it" << endl;


    // output
}

int main(){
    // PRO_H
    PRO_H();

    return 0;
}