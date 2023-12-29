#include <cmath>
#include <iostream>
using namespace std;
#define IP "Prime"
#define NP "Not Prime"

string checkIfPrime(int n){
    if(n <= 1){
        return NP;
    }
    if(n == 2 || n == 3){
        return IP;
    }

    for(int x = 2; x <= sqrt(n); x++){
        if(n % x == 0){
            return NP;
        }
    }

    return IP;
}

void PRO_B(){
    // input
    int N = 0; cin >> N;
    
    // output
    cout << checkIfPrime(N) << endl;
}

int main(){
    // PRO_B
    PRO_B();

    return 0;
    
}

/* 
02 03 05 07 11 13 17 19 23 29 31 37 41 43 47 53 59 61 67 71 73 79 83 89 97
  5  8  12
 
02 00
03 05
05 08
07 12
11 18
13 24
17 30
19 0
23 0
29 0
31 0
37 0
41 0
43 0
47 0
53 0
59 0
61 0
67 0
71 0
73 0
79 0
83 0
89 0
97

Trial Division: This is the simplest method. Check divisibility of 

If n is divisible by any number in this range, it's not prime.
this:
    (p – 1) ! ≡  -1   mod p 
    OR,  
    (p – 1) ! ≡  (p-1) mod p
    i got this theo. from here: https://www.geeksforgeeks.org/prime-numbers/
*/