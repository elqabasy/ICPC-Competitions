#include <string>
#include <iostream>

using namespace std;
void PRO_H(){
    int t = 0; cin >> t;
    for(int x = 0; x < t; x++){
        int rows = 8; string data = "";
        for(int row = 0; row < rows; row++){
            string text; cin >> text;
            for(char value : text){
                if(value != '.'){
                    data += value;
                }
            }
        }
        cout << data << endl;
    }

}

int main(){
    // PRO_H
    PRO_H();
    return 0;
}