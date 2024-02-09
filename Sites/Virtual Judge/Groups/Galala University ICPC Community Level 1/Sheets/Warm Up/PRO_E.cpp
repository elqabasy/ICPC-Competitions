#include <iostream>
using namespace std;
/* E - Very Very Primitive Game
    Takahashi goes first if C = 0 // A
    Aoki goes first if C = 1  // B
*/
#define AOK "Aoki"
#define TAK "Takahashi"

void PRO_E(){
    // input
    unsigned short int A = 0, B = 0, C = 0; cin >> A >> B >> C;

    // process
    if(C == 0){
        if(A == 0){
            cout << AOK << endl;
        }else if(A <= B){
            cout << AOK << endl;
        }else{
            cout << TAK << endl;
        }
    }else{
        if(B == 0){
            cout << TAK << endl;
        }else if(B <= A){
            cout << TAK << endl;
        }else{
            cout << AOK << endl;
        }
    }

    // output
}

int main(){
    // settings for preformance
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // PRO_E
    PRO_E();

    return 0;
}
