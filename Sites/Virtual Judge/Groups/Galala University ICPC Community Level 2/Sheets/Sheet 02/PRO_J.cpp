#include <iostream>
using namespace std;

void PRO_J(){
    // input
    int testCases = 0; cin >> testCases;

    // process
    for(int caseIndex = 0; caseIndex < testCases; caseIndex++){
        int k = 0, validNumbersCount = 0, result = 0; cin >> k;

        // for(int currentNumber = 1; currentNumber <= k; currentNumber++){
        for(int currentNumber = 1; validNumbersCount < k; currentNumber++){
            // will check if the number is valid or not
            if(currentNumber % 3 != 0 && currentNumber % 10 != 3){
                // validNumbersCount += 1;
                validNumbersCount++;
            } 
            result = currentNumber;

        }

        // results
        cout << result << endl;
    }

    // output
}

int main(){
    // PRO_J
    PRO_J();

    return 0;
}

/*

1,2 4,5 7,8 10,11 14,16
 1   2   1    2     1

Last Update:
    - How to return the last value of the currentNumber in second forLoop?
*/