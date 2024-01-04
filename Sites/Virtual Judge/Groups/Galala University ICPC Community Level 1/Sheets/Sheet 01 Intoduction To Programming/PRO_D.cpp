#include <iostream>
using namespace std;


// 1≤X,Y≤1000
int main(){

    int x, y;
    cin >> x >> y;
    if(x >= 1 && x <= 1000 && y >= 1 && y <= 1000){
        cout << x * y;
    }
}