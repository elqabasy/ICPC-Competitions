#include <iostream>
using namespace std;

void PRO_G(){
    // input
    int n = 0; cin >> n;

    // process
  
    // output
    if(n == 0){
      cout << 1;
    }else{
      switch (n % 4){
        case 1:
          cout << 8;
          break;
        
        case 2:
          /* code */
          cout << 4;
          break;

        case 3:
          cout << 2;
          /* code */
          break;

        case 0:
          cout << 6;
          /* code */
          break;
        
        default:
          break;
      }
    }
}

int main(){
    // PRO_G
    PRO_G();
    return 0;
}
/*
    print the last digit of 1378 ^ n.
    01 > 8      05 > 8       09 > 8       13 > 8
    
    02 > 4      06 > 4       10 > 4       14 > 4
    
    03 > 2      07 > 2       11 > 2       15 > 2
    
    04 > 6      08 > 6       12 > 6       16 > 6

    1 % 4 = 1
    2 % 4 = 2
    3 % 4 = 3
    4 % 4 = 0

    5 % 4 = 1
    6 % 4 = 2
    7 % 4 = 3
    8 % 4 = 0

    1 8
    2 4
    3 2
    4 6

    8 | *
      |
    6 |                         *
      |
    4 |        *
      |
    2 |                 *
      |
    0 |--------------------------
        1       2       3       4  

    09 > 8
    10 > 4
    11 > 2
    12 > 6
*/