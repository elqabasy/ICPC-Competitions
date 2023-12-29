#include <string>
#include <iostream>

using namespace std;
void PRO_I(){
    int t = 0; cin >> t;

    for(int x = 0; x < t; x++){
        string sequence; cin >> sequence;
        if (sequence == "abc" || sequence == "acb" || sequence == "bac" || sequence == "cba") {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }

    }

    /*
    abc (  w  ) => abc  
    acb (c w b) => abc 
    bac (b w a) => abc 
    cba (a w c) => abc
    */

}

int main()
{
    // PRO_I
    PRO_I();
    return 0;
}