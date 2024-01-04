#include <iostream>

using namespace std;

int main() {
    // inputs
    char input, result;
    cin >> input;


    // process
    if(islower(input)){
        result = toupper(input);
    }else{
        result = tolower(input);
    }


    // output
    cout << result;
    return 0;
}