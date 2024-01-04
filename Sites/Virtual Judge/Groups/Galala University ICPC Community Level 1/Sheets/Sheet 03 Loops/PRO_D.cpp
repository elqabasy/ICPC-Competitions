//
// Created by Mahros on 10/28/2023.
//
#include <iostream>
#include <cmath>
using namespace std;
void SAMPLE_D(){
    int N; cin >> N;
    if (1 <= N && N <= pow(10, 4)){
        for(int x = 1; x <= N; x++){
            if(N % x == 0){
                cout << x << endl;
            }
        }
    }
}


int main() {
    SAMPLE_D();
    return 0;
}
