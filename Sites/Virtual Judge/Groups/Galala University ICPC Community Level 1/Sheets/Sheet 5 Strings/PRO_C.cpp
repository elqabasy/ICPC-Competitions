#include <string>
#include <iostream>

using namespace std;

void PRO_C(){
    int T = 0; cin >> T;


    for(int x = 0; x < T; x++){
        string S; cin >> S;
        if(S.size() > 10){
            cout << S[0] << S.size() - 2 << S[S.size()-1] << endl;
        }else{
            cout << S << endl; 
        }


    }
}


int main(){
    // PRO_C
    PRO_C();
    return 0;
}
