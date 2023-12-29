//
// Created by Mahros on 11/4/2023.
//
#include "../headers/PRO_A.h"

/* Title: A - Hello Recursion
 * Description:
    ...
 * */
#include <iostream>
using namespace std;

void PRO_A(){
    // input
    // A KC per 100 MM
    // X        00B MM
    float A=0, B=0; cin >> A >> B;

    // output
    float result = (A * B / 100);
    cout << result << endl;
}