#include <iostream>
#include <cmath>

using namespace std;

int main() {
    // inputs
    int days;
    cin >> days;

    int years = days/365; // in years
    int months = (days % 365) / 30; //0
    days =  ((days % 365) % 30);

    if(0 <= days && days <= pow(10, 6)){
        cout << years << " years" << endl;
        cout << months << " months" << endl;
        cout << days << " days" << endl;
    }

    // output
    return 0;
}