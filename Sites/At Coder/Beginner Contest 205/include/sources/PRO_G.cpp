//
// Created by Mahros on 11/4/2023.
//
/* Title: G - Memo and Momo
 * Description:
    ...
 * */

#include "../headers/PRO_G.h"
#include <iostream>
using namespace std;

void PRO_G(){
    // input
    unsigned long long a, b, k;
    cin >> a >> b >> k;

    // process
    if(a % k == 0 && b % k == 0){
        cout << "Both" << endl;
    }else if(a % k == 0 && b % k != 0){
        cout << "Memo" << endl;
    }else if(a % k != 0 && b % k == 0){
        cout << "Momo" << endl;
    }else if(a % k != 0 && b % k != 0){
        cout << "No One" << endl;
    }
    // output

}
