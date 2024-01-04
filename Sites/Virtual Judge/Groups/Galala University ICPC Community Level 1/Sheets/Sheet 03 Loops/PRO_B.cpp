//
// Created by Mahros on 10/28/2023.
//
#include <iostream>
using namespace std;

void SAMPLE_B(){
    int n = 0; cin >> n;
    if(1 <= n && n <= 50){
        for(int x = 1; x <= 12; x++){
            cout << n << " * " << x << " = " << n * x << endl;
        }
    }
}


int main() {
    SAMPLE_B();
    return 0;
}