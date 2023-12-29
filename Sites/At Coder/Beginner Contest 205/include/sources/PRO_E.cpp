//
// Created by Mahros on 11/4/2023.
//
/* Title: E - Fixed Password
 * Description:
    ...
 * */

#include "../headers/PRO_E.h"
#include <iostream>
using namespace std;

void PRO_E(){

    int input = 0, correct = 1999;
    bool isCorrect = false;
    while (!isCorrect){
        cin >> input;
        if(input == correct){
            cout << "Correct";
            isCorrect = true;
        } else{
            cout << "Wrong" << endl;
        }
    }

}
