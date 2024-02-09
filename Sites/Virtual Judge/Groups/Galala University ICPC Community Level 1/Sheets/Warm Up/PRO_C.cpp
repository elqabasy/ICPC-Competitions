#include <iostream>
using namespace std;

/* C - Odd One Out

*/
void PRO_C(){
    // input
    unsigned short int testCases = 0, a = 0, b = 0, c = 0; cin >> testCases;


    // process
    for(int x = 0; x < testCases; x++){
        cin >> a >> b >> c;
        if(a == b){
            cout << c << endl;
        }else if (a == c)
        {
            cout << b << endl;
            
        }else if (c == b){
            cout << a << endl;
        }
    }

    // output
}

int main(){
    // settings for preformance
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // PRO_C
    PRO_C();

    return 0;
}