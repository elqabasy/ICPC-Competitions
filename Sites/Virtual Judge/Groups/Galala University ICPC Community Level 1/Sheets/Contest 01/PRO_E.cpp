#include <iostream>
using namespace std;

void PRO_E(){

    int input = 0, correct = 1999;
    bool isCorrect = false;
    while (!isCorrect){
        cin >> input;
        if(input == correct){
            cout << "Correct";
            isCorrect = true;
        } else{
            cout << "Wrong" << endl;
        }
    }

}

int main() {
    // PRO_E
    PRO_E();
    return 0;
}

