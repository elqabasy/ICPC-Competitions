#include <set>
#include <string>
#include <iostream>

using namespace std;
void PRO_J(){
    // input
    int t = 0; cin >> t;
    int a=0, b=0, c = 0;


    for(int x = 0; x < t; x++){
        cin >> a >> b >> c;
        if(a + b >= 10 || a + c >= 10 || c + b >= 10){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
    }
}

int main(){
    // PRO_J
    PRO_J();
    return 0;
}