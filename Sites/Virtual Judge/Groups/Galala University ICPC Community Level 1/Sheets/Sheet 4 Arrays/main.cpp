#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;


void PRO_E(){
    // input
    int val = 0;
    int N = 0; cin >> N;
    
    int A[N];
    for(int x = 0; x < N; x++){
        cin >> A[x];
    }

    int minIndex = 0;
    for(int x = 0; x < N; x++){
        // cout << "A[min] = " << A[minIndex] << endl;
        if(A[x] < A[minIndex]){
            minIndex = x;
        }
    }

    // minIndex++; // for 1-base index

    // number, position
    cout << A[minIndex] << " " << minIndex+1 << endl;

    // cout << minIndex << ", " << A[minIndex] << endl;
    /*
    5 6 2 3 2
    */

}



int main(){
    // PRO_E
    PRO_E();
    return 0;
}
