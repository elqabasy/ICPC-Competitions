#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


void PRO_D(){
    // input
    int t = 0; cin >> t;
     

    // process
    for(int caseIndex = 0; caseIndex < t; caseIndex++){
        int n = 0, d = 0; cin >> n >> d;
        vector<int> data = {};

        for(int x = 0; x < n; x++){
            int val = 0; cin >> val;
            data.push_back(val);
        }
        bool isPossible = true;

        sort(data.begin(), data.end());

        if (data[n - 1] > d) {
            if (data[0] + data[1] > d) {
                isPossible = false;
            }
        }

        
        if(isPossible == true){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;

        }
    }

    // output
}

int main(){
    // PRO_D
    PRO_D();

    return 0;
}