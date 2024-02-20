#include <iostream>
using namespace std;

// E - let's try something
void PRO_E(){
    // input
    unsigned short int testCases = 0; cin >> testCases;
    bool status = false;

    // process
    for(int caseI = 0; caseI < testCases; caseI++){
        int n = 0; cin >> n;
        string text; cin >> text;
        if(text == "2020"){
            status = true;
        }else if(text.substr(text.size() - 4, 4) == "2020"){ // X2020
            status = true;
        }else if(text.substr(0, 1) == "2" && text.substr(text.size() - 3, 3) == "020"){ // 2X020
            status = true;
        }else if(text.substr(0, 2) == "20" && text.substr(text.size() - 2, 2) == "20"){ // 20X20
            status = true;
        }else if(text.substr(0, 3) == "202" && text.substr(text.size() - 1, 1) == "0"){ // 202X0
            status = true;
        }else if(text.substr(0, 4) == "2020"){ // 2020X
            status = true;
        }else{
            status = false;
        }

        /*
        X2020
        2X020
        20X20
        202X0
        2020X
        -
        
        */
        // Output
        if(status){
            cout << "Yes" << endl;
        }else{
            cout << "No" << endl;
        }
    }   

    // output
}

int main(){
    // settings for preformance
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // PRO_E
    PRO_E();

    return 0;
}

/*

    
    YES 20192020   2X020  X2020 20X20 
    YES 22019020 
    YES 2020 
    NO  20002 
    NO  729040 
    NO  200200 

*/