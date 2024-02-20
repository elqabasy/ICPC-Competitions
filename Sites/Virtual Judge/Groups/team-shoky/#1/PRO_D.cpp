#include <iostream>
using namespace std;

/* 
    Time limit2000 msMem limit1048576 kB
    D - follow another equation 
*/

bool checkEquation(int A1, int A2, int A3){
    return ((A3 - A2) == (A2 - A1));
}

void PRO_D(){
    // input
    unsigned short int A = 0, B = 0, C = 0; cin >> A >> B >> C;

    // process
    /* get all possible rearrangements
        A B C     B A C
        C A B  =  A C B
        B C A     C B A


        Tests:
            1 3 5
            2 2
            
            5 3 1
            -2 -2
    */ 
    if(checkEquation(A, B, C) || checkEquation(C, A, B) || checkEquation(B, C, A)){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }

    // output
}



/* Details
    5 1 3

    1 2 3
    1 3 5

    A3 - A2  = A2 - A1
    5  - 3   = 3 - 1  
*/
int main(){
    // settings for preformance
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // PRO_D
    PRO_D();

    return 0;
}