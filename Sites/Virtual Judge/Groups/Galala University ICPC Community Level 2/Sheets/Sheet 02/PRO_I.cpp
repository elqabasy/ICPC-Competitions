#include <iostream>
using namespace std;

void PRO_I(){
    // input
    long long int n = 0, x = 0; cin >> n >> x;
    // process
    long long int distressed = 0, remainingAmount = 0, currentAmount = x;
    for(int x = 0; x < n; x++){
        char sym; long long int d = 0; cin >> sym >> d;
        if(sym == '-'){
            if(d <= currentAmount){
                currentAmount -= d;
            }else{
                distressed++;
            }
        }else{
            currentAmount += d;
        }

    }

    // output
    cout << currentAmount << " " << distressed << endl;
}

/*
Record "+ di" means that a carrier with di ice cream packs occupies i-th place from the start of the queue,
Record "- di" means that a child who wants to take di packs stands in i-th place.

*/


int main(){
    // PRO_I
    PRO_I();

    return 0;
}