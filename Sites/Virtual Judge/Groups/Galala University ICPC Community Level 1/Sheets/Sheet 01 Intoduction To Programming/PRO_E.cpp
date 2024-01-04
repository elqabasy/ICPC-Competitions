#include <iostream>
using namespace std;


/* Constrains
    - 1 ≤ N,W ≤ 1000
    - N and W are integers.
*/
int main(){
    int atMost, eachWeight;
    cin >> atMost >> eachWeight;

    if(atMost >= 1 && atMost <= 1000 && eachWeight >= 1 && eachWeight <= 1000){
        cout << int(atMost / eachWeight);
    }
}