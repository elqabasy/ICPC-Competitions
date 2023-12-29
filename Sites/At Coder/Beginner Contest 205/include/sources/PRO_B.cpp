//
// Created by Mahros on 11/4/2023.
//
/* Title: B - Permutation Check
 * Description:
    ...
 * */

#include "../headers/PRO_B.h"
#include <iostream>
using namespace std;

void PRO_B(){
    // input
    int N=0, value; string result = "No"; cin >> N; // integers count
    for(int index = 0; index < N; index++){
        cin >> value;
        if(value == N){
            result = "Yes";
        }
    }
    cout << result;

}
