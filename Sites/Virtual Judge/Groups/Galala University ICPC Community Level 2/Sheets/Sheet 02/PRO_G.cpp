#include <iostream>
using namespace std;

void PRO_G(){
    // input
    int n = 0; cin >> n;

    // process
    cout << (int) n / 2 << endl;


    if (n % 2 == 0) {
        for (int x = 0; x < n / 2; x++) {
            cout << 2 << " ";
        }
    } else {
        for (int y = 1; y < (n - 1) / 2; y++) {
            cout << 2 << " ";
        }
        cout << 3;
    }


    // output
}

int main(){
    // PRO_G
    PRO_G();

    return 0;
}