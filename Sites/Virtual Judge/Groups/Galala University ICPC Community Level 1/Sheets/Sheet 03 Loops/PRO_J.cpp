//
// Created by Mahros on 10/28/2023.
//
#include <cmath>
#include <string>
#include <iostream>

using namespace std;
void SAMPLE_J(){
    int T = 0; cin >> T;

    if(1 <= T && T <= 10){
        for(int x = 0; x < T; x++){
            int N = 0; cin >> N;
            if(0 <= N && N <= pow(10, 9)){
                string v = to_string(N);
                for(int z = v.size()-1; z >= 0; z--){
                    cout << v[z] << " ";
                }
                cout << endl;
            }
        }
    }
}

int main() {
    SAMPLE_J();
    return 0;
}
