#include <iostream>
using namespace std;

/* Constraints
    - 1≤M≤23
    - M is an integer.
*/
int main(){
    int M;
    cin >> M;

    if(1 <= M <= 23){
        cout << 48 - M;
    }
}