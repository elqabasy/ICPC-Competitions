#include <string>
#include <set>
#include <iostream>

using namespace std;

void PRO_F(){
    int n = 0; cin >> n;
    string S; cin >> S;

    for(int x = 0; x < n; x++){
        S[x] = tolower(S[x]);
    }
    
    set<int> data = {};
    for(char val : S){
        data.insert(val);
    }
    


    if(data.size() == 26){
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }
}

int main(){
    // PRO_F
    PRO_F();
    return 0;
}