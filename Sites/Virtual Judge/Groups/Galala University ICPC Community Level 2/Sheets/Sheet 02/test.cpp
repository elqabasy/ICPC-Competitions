#include <vector>
#include <iostream>
using namespace std;




void PRO_D(){
    // a.
    // input
    int testCasesCount = 0; cin >> testCasesCount;
    
    // process
    for(int x = 0; x < testCasesCount; x++){
        int arrayLength = 0, queriesCount = 0; 
        cin >> arrayLength >> queriesCount;
        // const int i = 10;
        int integers[arrayLength], otherIntegers[arrayLength];
        for(int i = 1; i <= arrayLength; i++){
            int val = 0; cin >> val;
            integers.push_back(val);
        }

        // third line -> queries
        int totalSum = 0, countOfRange = 0, from = 0, to = 0, replaceWith = 0;
        for(int y = 0; y < queriesCount; y++){
            /* Important
                from, to is 1-base index
            */
            cin >> from >> to >> replaceWith;

            // count of the range
            countOfRange = (to - from) + 1;

            from--; to--; // to 0-base index

            // get the sum of the range
            int sumOfSRange = sum(integers, from, to);
            totalSum =  sumOfArray - sumOfSRange + (replaceWith * countOfRange);

            if(totalSum % 2 != 0){
                cout << "YES" << endl;
            }else{
                cout << "NO" << endl;

            }
        }
        // output
    }
}

int main(){
    // PRO_D
    PRO_D();
    return 0;
}

/* What you hav learned?
    Numeric:
        fill, // but i remove fill for time excceed
        accumulate
*/
/*
2
5 5
2 2 1 3 2
2 3 3
2 3 4
1 5 5
1 4 9
2 4 3

Last fail
    4- Status
        Time limit exceeded on test 7
        Time 2000ms Memory 1140kB Length 1421
*/
// int sumOfSRange = reduce(execution::par, integers.begin() + from, integers.begin() + to + 1);

// int sumOfSRange = accumulate(integers.begin() + from, integers.begin() + to + 1, 0); 
// #include <numeric>
// #include <execution>