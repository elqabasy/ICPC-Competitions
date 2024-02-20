#include <iostream>
#include <vector>
#include <map>
using namespace std;
#define ll long long


void PRO_B(){
    // input
    int size = 0; cin >> size;
    map<string, int> data = {
        
    };
    

    // process
    string text, gram; cin >> text;
    int maxNumber = 0; string maxValue;
    for(int x = 0; x < size-1; x++){
        gram = text[x]; gram += text[x+1];
        data[gram]++;
        if(data[gram] >= maxNumber){
            maxNumber = data[gram];
            maxValue = gram;
        }
    }


    // output
    cout << maxValue << endl;
}

int main(){
    // settings for preformance
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // PRO_B
    PRO_B();

    return 0;
}