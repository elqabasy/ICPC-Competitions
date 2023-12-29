#include <iostream>
using namespace std;


void PRO_A(){
    // input
    int N = 0; cin >> N;

    // process
    int A[N];
    int max = 0;
    for(int x = 0; x < N; x++){
        int Ai = 0; cin >> Ai;
        A[x] = Ai;
        if(Ai > max){
            max = Ai;
        }
    }

    int max2 = 0;
    for(int val : A){
        if(val != max){
            if(val > max2){
                max2 = val;
            }
        }
    }

    cout << max2 << endl;

    // output
}

int main(){
    // PRO_A
    PRO_A();

    return 0;
}