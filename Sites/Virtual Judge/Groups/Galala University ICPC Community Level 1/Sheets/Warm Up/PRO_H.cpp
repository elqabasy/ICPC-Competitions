#include <iostream>
using namespace std;

/* H - Make it White

*/
void PRO_H(){
    // input
    int testCases = 0; cin >> testCases;
    int n = 0;
    for(int x = 0; x < testCases; x++){
        cin >> n;
        string text; cin >> text;
        int firstBlackIndex = -1, lastBlackIndex = -1;

        // process
        for(int x = 0; x < text.size(); x++){
            if(text[x] == 'B'){
                if(firstBlackIndex == -1){
                    firstBlackIndex = x; 
                }
                lastBlackIndex = x;
            }
        }
        cout << lastBlackIndex - firstBlackIndex + 1 << endl;
    }

    // output
}

int main(){
    // settings for preformance
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // PRO_H
    PRO_H();

    return 0;
}