#include <vector>
#include <iostream>
using namespace std;

void PRO_B(){
    // input
    string A, B; cin >> A >> B;


    cout << A.size() << " " << B.size() << endl;
    cout << A << B << endl;


    // swap
    char chars[2] = {A[0], B[0]};
    A[0] = chars[1]; B[0] = chars[0];



    cout << A << " " << B << endl;

}
int main(){
    // PRO_B
    PRO_B();
    return 0;
}