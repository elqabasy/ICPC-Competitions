//
// Created by Mahros on 11/4/2023.
//
/* Title: D - The Best
 * Description:
    ...
 * */

#include "../headers/PRO_D.h"
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void PRO_D(){
    // input
    long long int A=0, B=0, C=0, D=0;
    cin >> A >> B >> C >> D;
    vector<long long int> list = {A, B, C, D};

    sort(list.begin(), list.end());
    if(list[0] == list[1]){
        cout << "Equal" << endl;
    } else{
        if(list[0] == A){
            cout << "A";
        } else if(list[0] == B){
            cout << "B";

        } else if(list[0] == C){
            cout << "C";

        } else if(list[0] == D){
            cout << "D";

        }
    }
}