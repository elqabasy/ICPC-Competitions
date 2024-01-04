//
// Created by Mahros on 10/28/2023.
//
#include <iostream>
using namespace std;

void SAMPLE_F(){
    /*
     * Inputcopy	Outputcopy
        3 Number of problems
        -----
        Petya   Vasya    Tonya
        1       1        0
        1       1        1
        1       0        0
     * */
    int problemsCount = 0; cin >> problemsCount;
    if(problemsCount >= 1 && problemsCount <= 1000){
        int sureCount = 0;
        for(int x = 0; x < problemsCount; x++){
            int pView, vView, tView = 0;
            cin >> pView >> vView >> tView;
            int sure = pView + vView + tView;
            if(sure >= 2){
                sureCount++;
            }
            // cout << pView << " " << vView << " " << tView << endl;
        }
        cout << sureCount;
    }
}

int main() {
    SAMPLE_F();
    return 0;
}
