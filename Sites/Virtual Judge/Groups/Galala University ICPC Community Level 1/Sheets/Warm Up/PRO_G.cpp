#include <iostream>
using namespace std;
/* G - Rolling Dice 
    A = Times
    B = Target

*/
void PRO_G(){
    // input
    unsigned short int A = 0, B = 0; cin >> A >> B;


    // process
    bool status = false;
    for (int total = A; total <= 6 * A; total++) {
        if (total == B) {
            status = true;
            break;
        }
    }

    // output
    if(status){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
}

int main(){
    // settings for preformance
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // PRO_G
    PRO_G();

    return 0;
}