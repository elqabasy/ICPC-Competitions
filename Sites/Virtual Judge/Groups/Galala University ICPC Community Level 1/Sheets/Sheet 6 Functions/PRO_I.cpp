#include <iostream>
using namespace std;

void PRO_I(){
    // input
    int N; string S; cin >> N >> S;

    // process
    int count = 0;
    for(int x = 0; x < N-2; x++){
        string current = "";
        current += S[x];
        current += S[x+1];
        current += S[x+2];

        if(current == "ABC"){
            count++;
        }
    }


    // output
    cout << count << endl;
}

int main(){
    // PRO_I
    PRO_I();

    return 0;
}