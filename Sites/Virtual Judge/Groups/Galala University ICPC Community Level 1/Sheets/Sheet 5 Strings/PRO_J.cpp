#include <regex>
#include <string>
#include <iostream>

using namespace std;
void PRO_J(){

    string s; cin >> s;

    regex r("EGYPT");
     
    cout << regex_replace(s, r, " ") << endl;
   
    // 0 12345 6 7 8 9 0 1 2 3 4 5
    // I EGYPT I E R E G Y P T I Y
}

int main(){
    // PRO_J
    PRO_J();
    return 0;
}