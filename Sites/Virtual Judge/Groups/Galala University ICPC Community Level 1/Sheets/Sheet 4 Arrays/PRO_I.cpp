#include <set>
#include <string>
#include <iostream>

using namespace std;
void PRO_I()
{
    int t = 0, bagsCount=0;
    cin >> t;


    
    for (int x = 0; x < t; x++){
        cin >> bagsCount;
        int evenSum = 0, oddSum = 0;
        int candies[bagsCount]; // bags
        for(int bagIndex = 0; bagIndex < bagsCount; bagIndex++){
            cin >> candies[bagIndex];
            if(candies[bagIndex] % 2 == 0){
                evenSum += candies[bagIndex];
            }else{
                oddSum += candies[bagIndex];

            }
        }
        if(evenSum > oddSum){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
    }
}

int main()
{
    // PRO_I
    PRO_I();
    return 0;
}