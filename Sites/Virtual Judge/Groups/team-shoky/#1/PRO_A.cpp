#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;
/* A - It's easy! */
void PRO_A(){
    // input
    unsigned short int tests = 0; cin >> tests;
    short int arrayLength = 0;


    // process
    for(int x = 0; x < tests; x++){
        cin >> arrayLength;
        vector<unsigned long long int> data;

        // 0-base index
        for(int x = 0; x < arrayLength; x++){
            long long int value = 0; cin >> value;
            data.push_back(value);
        }

        sort(data.begin(), data.end());

        long long int sum = 0;
        for(int x = 1; x < arrayLength; x++){
            sum += data.at(x) - data.at(x-1);
        }
        
        cout << sum << endl;

    }

    // output
}
/*
    100 54 80 43 90
    43 54 80 90 100
    54 - 43 + 80 - 54 + 90 - 80 + 100 - 90 = 57 = true


    Result:
        - Sort array from less to graeter
        - The sum E.i - E.(i-1)
*/
int main(){
    // settings for preformance
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // PRO_A
    PRO_A();
    return 0;
}