#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
/* B - A PLUS B Remastered
    A, B, C in size N
    C.i = A.i + B.i for all 1 <= i <= N; 1-base index

*/
void PRO_B(){
    // input
    unsigned short int testCases = 0, arraySize = 0;
    cin >> testCases;

    // process
    for(int caseIndex = 0; caseIndex < testCases; caseIndex++){
        cin >> arraySize;
        vector<int> arrayA, arrayB, arrayC;
        bool isEqual = true;

        // get array input
        for(int x = 0; x < arraySize; x++){
            int val; cin >> val;
            arrayA.push_back(val);
        }

        for(int x = 0; x < arraySize; x++){
            int val; cin >> val;
            arrayB.push_back(val);
        }
        

        sort(arrayA.begin(), arrayA.end());
        sort(arrayB.begin(), arrayB.end());

        for(int x = 0; x < arraySize; x++){
            if(arrayA.at(0) + arrayB.at(0) != arrayA.at(x) + arrayB.at(x)){
                isEqual = false;
                break;
            }
        }



        // output
        if(isEqual == false){
            cout << -1 << endl;
        }else{
            for(int x = 0; x < arraySize; x++){
                cout << arrayA.at(x) << " ";
            }
            cout << endl;
            
            for(int x = 0; x < arraySize; x++){
                cout << arrayB.at(x) << " ";
            }
            cout << endl;

        }


    }

}

int main(){
    // settings for preformance
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // PRO_B
    PRO_B();

    return 0;
}