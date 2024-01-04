//
// Created by Mahros on 10/28/2023.
//
#include <iostream>
using namespace std;

void SAMPLE_G(){
    int a, b = 0; cin >> a >> b;
    if(1 <= a && a <= b && b <= 10){
        int years = 0;
        while (a <= b){
            a *= 3;
            b *= 2;
            years++;
        }
        cout << years;
    }
}


int main() {
    SAMPLE_G();
    return 0;
}
