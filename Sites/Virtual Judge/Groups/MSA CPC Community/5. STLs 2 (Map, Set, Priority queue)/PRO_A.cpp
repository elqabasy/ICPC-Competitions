#include <set>
#include <iostream>
using namespace std;

void PRO_A(){
    // input
    set<char> data;
    

    // process
    char val;
    while (cin >> val){
        if(val == '}'){ // close }
            break;
        }else if(isalpha(val)){
            data.insert(val);
        }else{ // open {

        }
    }
    
    // output
    cout << data.size() << endl;
}

int main(){
    // settings for preformance
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // PRO_A
    PRO_A();
    return 0;
}