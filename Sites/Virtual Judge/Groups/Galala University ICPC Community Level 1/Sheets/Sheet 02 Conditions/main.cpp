#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int n; string numbers[9] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    cin >> n;
    if(1 <= n && n <= pow(10, 9)){
        if(1 <= n && n <= 9){
            cout << numbers[n-1];
        }else{
            cout << "Greater than 9";
        }
    }
    return 0;
}