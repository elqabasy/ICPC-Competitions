#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
void PRO_E(){
    // input
    int childCount = 0; cin >> childCount; // childrens count

    // process
    // PRO. MATH. PE.
    // 1    2     3
    /*
    PRO: indexes

    data = {
        {0, 0, ...}, // PRO:  0-index
        {0, 0, ...}, // MATH: 1-index
        {0, 0, ...}, // PE:   2-index
    }
    */
    vector<vector<int>> data = {
        {}, {}, {} // must be empty
    };

    // data.clear();
    // Count students
    for(int childIndex = 0; childIndex < childCount; childIndex++){
        int val = 0; cin >> val;
        switch (val){
            case 1: // PRO.
                data.at(0).push_back(childIndex +1);
                break;
            case 2: // MATH.
                data.at(1).push_back(childIndex +1);
                break;
            case 3: // PE.
                data.at(2).push_back(childIndex +1);
                break;
            default:
                break;
        }
    }

    // output
    int smallestSubjectSize = min(data.at(0).size(), min(data.at(1).size(), data.at(2).size()));
    cout << smallestSubjectSize << endl;
    // cout << *data.at(0).begin();
    // exit(0);
    while (smallestSubjectSize > 0){ // must be greater than 0
        // PRO MATH PE
        cout << data.at(0).at(0); // PRO
        cout << " ";
        cout << data.at(1).at(0); // MATH
        cout << " ";
        cout << data.at(2).at(0); // MATH
        cout << endl;

        // remove taken students
        data.at(0).erase(data.at(0).begin()); // PRO
        data.at(1).erase(data.at(1).begin()); // MATH
        data.at(2).erase(data.at(2).begin()); // PE
        smallestSubjectSize--;
        // exit(0);
    }



    // fetch data as a table
    // int maxSubjectStudents = max(data.at(0).size(), max(data.at(1).size(), data.at(2).size()));
    // cout << endl;
    // for(int row = 0; row < maxSubjectStudents; row++){
    //     // for(int col = 0; col < 3; col++){
    //     // PRO
    //     auto *pro = &data.at(0);
    //     auto *math = &data.at(1);
    //     auto *pe = &data.at(2);
    //     if(pro->size() > row){
    //         cout << pro->at(row) << "   ";
    //     }
    //     if(math->size() > row){
    //         cout << math->at(row) << "   ";
    //     }
    //     if(pe->size() > row){
    //         cout << pe->at(row) << "   ";
    //     }
    //     cout << endl << endl;
    // }
    
}

int main(){
    // PRO_E
    PRO_E();

    return 0;
}

/*
ti = 1, if the i-th child is good at programming,
ti = 2, if the i-th child is good at maths,
ti = 3, if the i-th child is good at PE
PRO.    MATH.   PE.
1       3
*/