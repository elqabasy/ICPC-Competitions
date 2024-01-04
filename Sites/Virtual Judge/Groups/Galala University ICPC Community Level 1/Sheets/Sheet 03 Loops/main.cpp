//
// Created by Mahros on 10/28/2023.
//
#include <iostream>
#include <vector>
using namespace std;

int factorial(int number){
    if(number == 0){
        return 1;
    }

    return number * factorial(number - 1);
}

void SAMPLE_A(){
    // first number = count
    int T = 0; cin >> T;
    vector<int> result = {};

    if(1 <= T && T <= 100){
        for(int x = 1; x <= T; x++){
            int N = 0; cin >> N;
            if(1 <= N && N <= 50){
                result.push_back(factorial(N));
            }
        }
        for(int val : result){
            cout << val << endl;
        }
    }
}

int main(){

    SAMPLE_A();
}