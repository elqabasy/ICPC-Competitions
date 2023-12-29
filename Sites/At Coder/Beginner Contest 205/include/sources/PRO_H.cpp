//
// Created by Mahros on 11/4/2023.
//
/* Title: PRO_H
 * Description:
    ...
 * */

#include "../headers/PRO_H.h"
#include <iostream>
using namespace std;

void PRO_H(){
    // input
    unsigned int N = 0;
    cin >> N;

    // process
    for(int row = 0; row < N; row++){
        for(int col = 0; col <= row; col ++){
            cout << "*";
        }
        cout << endl; // end current row
    }
}
