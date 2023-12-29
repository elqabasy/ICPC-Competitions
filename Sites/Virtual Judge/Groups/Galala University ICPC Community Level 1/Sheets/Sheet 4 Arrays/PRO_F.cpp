#include <string>
#include <vector>
#include <iostream>

using namespace std;

void PRO_F(){
    int N = 0, val = 0; cin >> N;
    int data[N][N];
    int primaryDiagonalSum = 0,  secondaryDiagonalSum = 0;

    for(int row = 0; row < N; row++){
        for(int col = 0; col < N; col++){
            cin >> data[row][col];
        }
    }

    // cout << "\noutput\n";
    for(int row = 0; row < N; row++){
        for(int col = 0; col < N; col++){
            // cout << data[row][col] << " ";
            if(row == col){ // main diagonal
                primaryDiagonalSum += data[row][col];
            }
        }
        secondaryDiagonalSum += data[row][N-1-row];
        // cout << endl;
    }



    cout << abs(primaryDiagonalSum - secondaryDiagonalSum) << endl; 

}

int main(){
    // PRO_F
    PRO_F();
    return 0;
}