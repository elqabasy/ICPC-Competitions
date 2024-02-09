#include <iostream>
using namespace std;
/* F - Vanishing Pitch

*/
void PRO_F(){
    // input
    unsigned short int V = 0, T = 0, S = 0, D = 0; cin >> V >> T >> S >> D;

    // process
    long double timeForGoToDistance = (double) D / V;

    // output
    if(timeForGoToDistance <= S && T <= timeForGoToDistance){
        cout << "No" << endl;
    }else{
        cout << "Yes" << endl;
    }
}

int main(){
    // settings for preformance
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // PRO_F
    PRO_F();

    return 0;
}