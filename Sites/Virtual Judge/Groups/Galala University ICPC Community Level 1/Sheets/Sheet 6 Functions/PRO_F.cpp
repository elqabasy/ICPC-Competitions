#include <iostream>
using namespace std;

void PRO_F(){
    // input
    int A = 0, B = 0, C = 0;
    int X = 0, Y = 0, Z = 0; cin >> X >> Y >> Z;

    // process
    // X = A, Y = B, Z = C
    A = Y; B = X; // A w B 
    A = Z; C = Y; // A w B 

    // output

    cout << A << " " << B << " " << C << endl;
}

int main(){
    // PRO_F
    PRO_F();

    return 0;
}