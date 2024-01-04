//
// Created by Mahros on 10/28/2023.
//
#include <iostream>
using namespace std;

void SAMPLE_C(){
    int statementCount, x = 0; cin >> statementCount;

    if(statementCount >= 1 && statementCount <= 150 ){
        for(int c = 0; c < statementCount; c++){
            string input; cin >> input;
            if (input == "X++" || input == "++X"){ // addition
                x++;
            }else if(input == "X--" || input == "--X"){ // subtraction
                x--;

            }
        }
        cout << x;
    }
}


int main() {
    SAMPLE_C();
    return 0;
}
