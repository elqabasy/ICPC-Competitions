//
// Created by Mahros on 11/4/2023.
//
/* Title: C - Even, Odd, Positive and Negative
 * Description:
    ...
 * */

#include "../headers/PRO_C.h"
#include <iostream>
#include <cmath>
using namespace std;

void PRO_C(){
    // input
    int N = 0, evenCount=0, oddCount=0, negativeCount=0, positiveCount=0;
    cin >> N;

    // process
    if(1 <= N && N <= pow(10, 3)){
        for(int x = 0; x < N; x++){
            int value = 0;
            cin >> value;
            if(pow(-10, 5) <= value && value <= pow(10, 5)){
                if(value % 2 == 0){ // check if even
                    evenCount++;
                } else{
                    oddCount++;
                }
                if(value > 0){ // check if positive
                    positiveCount++;
                } else if (value < 0){ // check negative
                    negativeCount++;
                }
            }
        }
    }

    // output
    cout << "Even: " << evenCount << endl;
    cout << "Odd: " << oddCount << endl;
    cout << "Positive: " << positiveCount << endl;
    cout << "Negative: " << negativeCount << endl;
}
