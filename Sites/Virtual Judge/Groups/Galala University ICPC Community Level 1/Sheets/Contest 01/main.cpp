#include <iostream>
#include <cmath>
using namespace std;

void PRO_A(){
    // input
    int t = 0; // test cases


    cin >> t;

    // process
    if(1 <= t && t <= pow(10, 4)){
        for(int x = 0; x < t; x++){
            int rating = 0;
            cin >> rating;
            if(-5000 <= rating && rating <= 5000){
                if(1900 <= rating){ // firsit division
                    cout << "Division " << 1 << endl;
                }else if(1600 <= rating && rating <= 1899){
                    cout << "Division " << 2 << endl;
                }else if(1400 <= rating && rating <= 1599){
                    cout << "Division " << 3 << endl;
                }else if(rating <= 1399){
                    cout << "Division " << 4 << endl;
                }

            }
        }
    }

    // output
    // cout << "PRO_A" << endl;

}

int main() {
    // PRO_A
    PRO_A();
    return 0;
}

