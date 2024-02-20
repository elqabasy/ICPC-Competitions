#include <iostream>
using namespace std;

/* C - let's play */
void PRO_C(){
    // input
    unsigned long int shops = 0; cin >> shops;
    unsigned long long int minutes = 0, price = 0, inStock = 0;
    long long int minPrice = 999999999999; // this mean he can't get any one

    // process
    for(int shop = 0; shop < shops; shop++){
        cin >> minutes >> price >> inStock; // minutes
        if(inStock > minutes){
            // cout << "> " << minutes << " " << price << " " << inStock << endl;
            // can get at least one
            if(price < minPrice){
                minPrice = price;
            }
        }
        /* calc. remaining in stock
            every 1 minute decrease by 1 stock > 0.5, 1.5,2.5,
            M   S
            1   S-1

        */
    }

    // output
    
    if(minPrice == 999999999999){ // no any change so -1
        cout << -1 << endl;
    }else{
        cout << minPrice << endl;
    }
}

/* Deetails
    Shops from 1 to N
    Shop i is A.i minutes' walk from where Takahashi is now
*/
int main(){
    // settings for preformance
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // PRO_C
    PRO_C();

    return 0;
}