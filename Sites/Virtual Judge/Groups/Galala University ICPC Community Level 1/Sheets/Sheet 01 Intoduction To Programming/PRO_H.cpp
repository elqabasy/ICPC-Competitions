#include <iostream>
using namespace std;

/* Constraints
    - 1≤X,Y≤100
    - Y is an even number.
    - All values in input are integers.
*/
int main(){
    int X, Y;
    cin >> X >> Y;

    if(1 <= X, Y <= 100 && Y % 2 == 0){
       cout << Y/2 + X;
    }
}