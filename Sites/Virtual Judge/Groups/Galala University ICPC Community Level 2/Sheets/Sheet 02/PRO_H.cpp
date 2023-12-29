#include <iostream>
using namespace std;

#define ON true
#define OFF false

void PRO_H(){
    // input
    int originalGrid[3][3] = {
        // In the beginning of the game all lights are switched on.
        {0, 0, 0}, 
        {0, 0, 0}, 
        {0, 0, 0}
    };

    bool newGrid[3][3] = {
        {ON, ON, ON}, 
        {ON, ON, ON}, 
        {ON, ON, ON}
    };

    // The input consists of three rows.
    // input, process
    for(int row = 0; row < 3; row++){
        for(int col = 0; col < 3; col++){
            int switchCount = 0; cin >> switchCount;
            originalGrid[row][col] = switchCount;

            int originalSwitchCount = originalGrid[row][col];
            if(originalSwitchCount % 2 != 0){
                newGrid[row][col] = !newGrid[row][col]; // swap value of current
                /*
                    ORIGINA   NEW
                    *  *  *   0 1 0 
                    *  *  *   0 1 1 <--
                    2  0  3   1 0 0
                */  

                // rows
                if(row == 0){
                    newGrid[row + 1][col] = !newGrid[row + 1][col];
                }
                
                if(row == 1){
                    newGrid[row - 1][col] = !newGrid[row - 1][col];
                    newGrid[row + 1][col] = !newGrid[row + 1][col];
                }
                
                if(row == 2){
                    newGrid[row - 1][col] = !newGrid[row -1][col];
                }

                // columns
                /*
                    ORIGINA    NEW
                              !
                    *  *  *   0 1 0 
                    *  *  *   0 1 1
                    2  0  3   1 0 0
                */  
                if(col == 0){
                    newGrid[row][col + 1] = !newGrid[row][col + 1];
                }
                
                if(col == 1){
                    newGrid[row][col - 1] = !newGrid[row][col - 1];
                    newGrid[row][col + 1] = !newGrid[row][col + 1];
                }
                
                if(col == 2){
                    newGrid[row][col - 1] = !newGrid[row][col - 1];
                }
            }   
        }
    }

    // output
    for(int row = 0; row < 3; row++){
        for(int col = 0; col < 3; col++){
            int value = newGrid[row][col];
            cout << value;
        }
        cout << endl;
    }
}

int main(){
    // PRO_H
    PRO_H();

    return 0;
}

/* Explain
// Press index(0, 0) 1 (odd) -> off
     
    {f 0 0}
    {0 0 0}
    {0 0 0}


// Press index(0, 0) 3 (odd) -> off
init value: on
1- off 2- on 3- off
    {0 0 0}
    {0 0 0}
    {0 0 0}

// Press index(0, 0) 2 (even) -> on
init value: on
1- off 2- on
    {0 0 0}
    {0 0 0}
    {0 0 0}

Conclusion:
    if the light pressed even times it will be at end on else off
    Each row contains three integers each between 0 to 100 inclusive. 
    The j-th number in the i-th row is the number of times the j-th light of the i-th row of the grid is pressed.
*/