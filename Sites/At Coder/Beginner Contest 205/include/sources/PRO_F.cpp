//
// Created by Mahros on 11/4/2023.
//
/* Title: PRO_F
 * Description:
    ...
 * */

#include "../headers/PRO_F.h"
#include <iostream>
using namespace std;

void PRO_F(){
    int t=0, a=0, b=0, c=0;
    cin >> t;
    for(int x = 0; x < t; x++){
        cin >> a >> b >> c;
        if(a + b == c){
            cout << "YES" << endl;
        }else if(a + c == b){
            cout << "YES" << endl;

        }else if(b + c == a){
            cout << "YES" << endl;

        }else{
            cout << "NO" << endl;
        }
    }

}
