//
// Created by Mahros on 10/28/2023.
//
#include <cmath>
#include <iostream>
using namespace std;

void SAMPLE_H(){
    // First line contains a number N (1 ≤ N ≤ 103). Second line contains N numbers Xi (0 ≤ Xi ≤ 109).
    int N, max = 0; cin >> N;
    if(1 <= N && N <= pow(10, 3)){

        for(int x = 0; x < N; x++){
            int cn = 0; cin >> cn;
            if(0 <= cn && cn <= pow(10, 9)){
                if (cn > max){
                    max = cn;
                }
            }
        }
        cout << max;
    }

}



int main() {
    SAMPLE_H();
    return 0;
}
