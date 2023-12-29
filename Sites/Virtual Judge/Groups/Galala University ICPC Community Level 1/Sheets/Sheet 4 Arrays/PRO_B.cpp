#include <vector>
#include <iostream>
using namespace std;

void PRO_B(){
    // input
    int n = 0; cin >> n;
    signed long long int sum = 0;
    for(int x = 0; x < n; x++){
        auto val = 0; cin >> val;
        sum += val;
    }


    cout << abs(sum) << endl;
    
}
int main(){
    // PRO_B
    PRO_B();
    return 0;
}