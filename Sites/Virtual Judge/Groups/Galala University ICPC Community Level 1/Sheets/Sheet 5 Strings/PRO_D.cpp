#include <map>
#include <iostream>

using namespace std;

void PRO_D(){
    int t = 0; cin >> t;


    for(int x = 0; x < t; x++){
        int n = 0; cin >> n;
        string s; cin >> s;
        int max = 0;
        for(int y = 0; y < n; y++){
            if(s[y] > max){
                max = s[y];
            }
        }
        cout << max - 96 << endl; // a = 97
    }

}

int main(){
    // PRO_D
    PRO_D();
    return 0;
}
