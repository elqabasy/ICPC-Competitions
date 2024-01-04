#include <iostream>
using namespace std;

void SAMPLE_E(){
    // 97 - 122
    // int lastValue = 0;
    for(int index = 1; index <= 26; index++){
        int input = 0; cin >> input;
        if(input >= 1 && input <= 26){
            int currentValue = 96 + input;
            // if(currentValue > lastValue){
            //     lastValue = currentValue;
            cout << char(currentValue);
            // }
        }
    }

}


using namespace std;
int main() {
    // cout << "ICPC - Problem Solving!" << endl;
    SAMPLE_E();
    return 0;
}
