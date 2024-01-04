#include <iostream>
using namespace std;


/* Constraints
    
    - All values in input are integers.
    - 100 ≤ N ≤ 200
    - 1 ≤ A,B ≤ 100
*/
int main(){
    int N, A, B;
    cin >> N >> A >> B;

    if(1000 <= N <= 200 && 1 <= A, B <= 100){
        cout << N - A + B;
    }
}