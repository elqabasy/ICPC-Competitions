#include <map>
#include <iostream>

using namespace std;

void PRO_D(){
    long int val = 0;
    int rows=0, columns=0; cin >> rows >> columns;


    long int data[rows][columns]; // true

    for(int row = 0; row < rows; row++){
        for(int column = 0; column < columns; column++){
            cin >> val;
            data[row][column] = val;
        }
    }

    // output
    for(int row = 0; row < rows; row++){
        for(int column = columns-1; column >= 0; column--){
            // cout << row << ", " << column << " ";
            cout << data[row][column] << " ";
        }
        cout << endl;
    }


    /*
    
    [
        [1, 2, 3],
        [4, 5, 6],
        [7, 8, 9]
    ]
    */

}

int main(){
    // PRO_D
    PRO_D();
    return 0;
}
