#include <iostream>
#include <vector>

using namespace std;

int isExist(char val, vector<char> list){
    for (char x : list){
        if (x == val){
            return true;
        }
    }
    return false;
} 

int main() {
    char c;
    cin >> c;
    c = tolower(c);
    
    if(isExist(c, {'a', 'e', 'i', 'o', 'u'})){
        cout << "vowel";
    }else{
        cout << "consonant";
    }


    return 0;
}