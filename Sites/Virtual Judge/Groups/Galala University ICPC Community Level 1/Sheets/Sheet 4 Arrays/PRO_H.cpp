#include <string>
#include <iostream>

using namespace std;
void PRO_H(){
    int N = 0; cin >> N;

    int data[N];

    for(int x = 0; x < N; x++){
        cin >> data[x];
    }


    int xFromEnd = N-1; // this is last index
    bool palindrom = true;
    for(int x = 0; x < N; x++){
        if(data[x] != data[xFromEnd - x]){
            palindrom = false;
            break;
        }
    }
    if(palindrom == true){
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }

}

int main(){
    // PRO_H
    PRO_H();
    return 0;
}