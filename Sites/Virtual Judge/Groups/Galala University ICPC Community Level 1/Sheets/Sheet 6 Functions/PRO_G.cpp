#include <cmath>
#include <iostream>
using namespace std;


long long int f(long long int n){
    // f(n) =  - 1 + 2 - 3 + .. + (-1)^n^n    
    /*
    count of previuos calc
    last is odd, even
    -1+2 -3+4 -5+6 -7+8 -9+10
      1    1    1    1    1

      odd
      -1 > -1
      -1+2-3 > -2
      -1+2-3+4-5 > -3
      -1+2-3+4-5+6-7 > -4
    */

    if(abs(n) % 2 == 0){ // even
        return n / 2;
    }else{
        // return ((n-1) / 2) - n; 
        return -((n + 1) / 2);
    }
    // return 0;
}


void PRO_G(){
    // input
    long long int n = 0; cin >> n;


    // process
    // output
    cout << f(n) << endl;
}

int main(){
    // PRO_G
    PRO_G();

    return 0;
}