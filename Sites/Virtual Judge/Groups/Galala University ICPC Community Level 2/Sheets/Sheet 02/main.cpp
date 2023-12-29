#include <iostream>
using namespace std;

 
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int arrayLength = 0, casesCount = 0; cin >> arrayLength >> casesCount;
        int originalArray[arrayLength], newArray[arrayLength];

        newArray[0] = 0;
        for(int i = 1; i <= arrayLength; i++)
        {
            cin >> originalArray[i];
            newArray[i] = newArray[i - 1] + originalArray[i];
        }
        // exit(0);
        while(casesCount--)
        {
            int from, to, k;
            cin >> from >> to >> k;
            int sum = newArray[arrayLength] - newArray[to] + newArray[from - 1];
            
            if((sum + (to - from + 1) * k) % 2 != 0){
                cout << "YES" << endl;
            }
            else{
                cout << "NO" << endl;
            }
        }
    }
    return 0;
}

/*
1
5 5
2 2 1 3 2
2 3 3
2 3 4
1 5 5
1 4 9
2 4 3
*/