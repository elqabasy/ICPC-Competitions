#include <iostream>
using namespace std;

/* D - uNrEaDaBlE sTrInG
    odd > lower
    even > upper
    hard to read;
*/
void PRO_D(){
    // input
    string text; cin >> text;

    // process
    // 1-base index
    bool result = true  ;
    for(int x = 1; x <= text.size(); x++){
        if(x % 2 != 0){ // odd
            if(!islower(text[x-1])){
                result = false;
                break;
            }
        }else{ // even
            if(!isupper(text[x-1])){
                result = false;
                break;
            }
        }
    }

    // output
    if(result == true){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
}

int main(){
    // settings for preformance
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // PRO_D
    PRO_D();

    return 0;
}