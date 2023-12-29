#include <iostream>
using namespace std;

void PRO_H(){
    // input
    int A = 0, P = 0; cin >> A >> P;

    // process
    // FTIRA need 2 P
    // A can be 3 P
    int PCount = P + A * 3;
    // A = 1, P = 3
    // output
    cout << PCount / 2 << endl;

}

int main(){
    // PRO_H
    PRO_H();

    return 0;
}