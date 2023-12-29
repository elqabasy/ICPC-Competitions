#include <cmath>
#include <iostream>
using namespace std;

void PRO_C(){
    // input
    int N, M, P; cin >> N >> M >> P;

    // process
    int count = 0;

    for(int day = M; day <= N; day += P){
        count++;
    }

    // output
    cout << count << endl;
}

int main(){
    // PRO_C
    PRO_C();

    return 0;
}