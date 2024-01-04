#include <iostream>
using namespace std;

void PRO_B(){
    // input
    long long int a=0, b=0, c=0; long long int d=0;
    cin >> a >> b >> c >> d;
    if((a + b - c) == d) { // + -
        cout << "YES" << endl;

    }else if((a - b + c) == d){ // 0 +
        cout << "YES" << endl;

    }else if((a + b * c) == d){ // + -
        cout << "YES" << endl;

    }else if((a * b + c) == d){ // + -
        cout << "YES" << endl;

    }else if((a - b * c) == d){ // + -
        cout << "YES" << endl;

    }else if((a * b - c) == d){ // + -
        cout << "YES" << endl;
    } else{
        cout << "NO"  << endl;
    }

}

int main() {
    // PRO_B
    PRO_B();
    return 0;
}
