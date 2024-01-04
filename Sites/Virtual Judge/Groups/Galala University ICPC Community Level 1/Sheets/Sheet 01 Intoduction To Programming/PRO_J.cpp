#include <iostream>
#include <cmath>
using namespace std;

/* Constraints
    1 ≤ M ≤ N ≤ 16).
*/
int main(){
    int M, N;
    cin >> M >> N;

    if(1 <= M <= N <= 16){
        cout << floor((M*N) / 2);
    }
}