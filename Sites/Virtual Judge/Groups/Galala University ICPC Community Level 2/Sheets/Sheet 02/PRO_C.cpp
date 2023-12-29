#include <vector>
#include <iostream>
using namespace std;

void PRO_C(){
    // input
    int wiresCount = 0; cin >> wiresCount;

    vector<int> wires = {};


    // process
    for(int wireIndex = 0; wireIndex < wiresCount; wireIndex++){
        int birdsCount = 0; cin >> birdsCount;
        wires.push_back(birdsCount);
    }

    // shots actions
    int shotsCount = 0; cin >> shotsCount;

    // check inputs

    for(int shotIndex = 0; shotIndex < shotsCount; shotIndex++){
        int wireIndex = 0, birdPosition = 0; cin >> wireIndex >> birdPosition;
        /* Sooo, Important NOTE
            the user-input wireIndex is 1-base index.
        */
        wireIndex--; // trans for 0-base index
        
        /*
        why the below declaration can't change wires.at(wireIndex-1) direct????? 
            int *currentWire = &wires.at(wireIndex-1); // i spend tooooooo match time for 0-base index
        */

        int currentWireBirdsCount = wires.at(wireIndex); // i spend tooooooo match time for 0-base index
        // exit(0);

        /* Wire
        0 1 2 3 4 5 6 7 8 9
        . . . . * . . . . .
        .*..
        */
        // count left, right birds

        int currentLeftBirdsCount = birdPosition - 1; // check the value of this
        int currentRightBirdsCount = currentWireBirdsCount - birdPosition;
        
        /*  0 1         6
            . . . . . . .
        */

        // check if there is left wires
        if(wireIndex > 0){
            // add birds to left, remove them from current wire
            wires.at(wireIndex - 1) += currentLeftBirdsCount;
        }
        // 0 1 2 3 4 5 6
        // . . . . . . .
        // check if there is right wire

        // cout << endl << "wires.size() " << wires.size() << endl;
        if(wireIndex < wires.size() - 1){
            wires.at(wireIndex + 1) += currentRightBirdsCount;
        }

        // shotted
        wires.at(wireIndex) = 0;
    }
    /*
    
    .. .*.. .
    */
    // output
    cout << "\n" << endl;
    for(int val : wires){
        cout << val << endl;
    }
}

int main(){
    // PRO_C
    PRO_C();

    return 0;
}

/*
5
10 10 10 10 10
5
2 5
3 13
2 12
1 13
4 6

// My simple test
5
10 10 10 10 10
1
2 5
 */