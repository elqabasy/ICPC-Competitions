#include <vector>
#include <iostream>
using namespace std;

void PRO_A(){
    // input
    int n = 0; 
    vector<int> data = {};
    // 1-baseindex

    cin >> n;

    for(int index = 0; index < n; index++){
        int val = 0; 
        cin >> val;
        data.push_back(val);
    }

    int l=0, r=0; cin >> l >> r;
    for(int x = l; x <= r; x++){
        cout << data.at(x-1) << " ";
    }


}

int main(){
    // PRO_A
    PRO_A();

    return 0;
}