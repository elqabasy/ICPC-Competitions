#include <iostream>
using namespace std;

#define ll long long

// E - let's try something
void PRO_F(){
    // input
    ll int booksCount = 0, maxFreeTime = 0, maxReadBooks = 0; cin >> booksCount >> maxFreeTime;
    ll int data[booksCount];

    // process
    // reduce time to 0.5
    ll int item = 0, selectedTime = 0, lastIndex = 0;
    for(ll int index = 0; index < booksCount; index++){
        cin >> item;
        data[index] = item;

        selectedTime += item;
        if(selectedTime <= maxFreeTime){
            maxReadBooks++;
        }else{
            selectedTime -= data[lastIndex];
            lastIndex++;
        }
    }

    // output
    cout << maxReadBooks << endl;
}


/* Details 

    freeTime = 5
        4 5
        3 1 2 1
        3 4 

        1 2 3 4 5
        - -
        
        5 4 3 2 1
        -

        4 5
        3 1 2 1

        MT = 1, MB = 1, LastIndex = 0+1
        4 5
        3 1 2 1
        0 _____

        1 2 1
         not
        3 1 1

        LastValue, LastIndex
        he want the تتابع for max books he can read
*/
int main(){
    // settings for preformance
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // PRO_F
    PRO_F();

    return 0;
}