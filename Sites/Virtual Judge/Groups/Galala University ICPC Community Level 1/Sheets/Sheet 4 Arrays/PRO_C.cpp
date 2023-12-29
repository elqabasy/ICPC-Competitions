#include <string>
#include <iostream>

using namespace std;

void PRO_C(){
    unsigned short int N = 0; cin >> N; // start from 2


    for(int x = 0; x < N; x++){
        int val = 0; cin >> val;
        if(val <= 10){
            cout << "A[" << x << "]" << " = " << val << endl;
        }
    }
}


int main(){
    // PRO_C
    PRO_C();
    return 0;
}
