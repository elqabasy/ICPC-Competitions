#include <iostream>
using namespace std;

void swapChars(char &val1, char &val2){
    char temp = val1;
    val1 = val2; val2 = temp;
}

void PRO_B(){
    // input
    int queueCount = 0, transformTime = 0; cin >> queueCount >> transformTime;


    // process
    string currentArrangement; cin >> currentArrangement;

    while (transformTime--){
        for(int x = 0; x < currentArrangement.size() - 1; x++){
            if(currentArrangement[x + 1] == 'G' && currentArrangement[x] == 'B'){
                swapChars(currentArrangement[x+1], currentArrangement[x]); x++;
            }
        }
        // if(transformTime > 1){
        //     char posI1 = currentArrangement[transformTime], posI2 = curre[transformTime+1];
        // }
    }
    

    // output
    cout << currentArrangement << endl;
}

int main(){
    // PRO_B
    PRO_B();

    return 0;
}

/*
Inputcopy	Outputcopy
5 2
BGGBG

1 - GGBGG
2 - GBGGG

SEQ: 1 to n
1 served first

at time x and x > 1:
    let i = 2;
    1 2 3
    B B G

then at time x+1 and x > 1;
BGGBG
GGBG
*/