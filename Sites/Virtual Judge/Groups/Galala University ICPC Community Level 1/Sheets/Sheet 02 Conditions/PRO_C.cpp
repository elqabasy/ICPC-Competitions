#include <iostream>
using namespace std;


int main(){
    int N; 
    cin >> N;

    int first = N / 100;
    int last = N % 10;
    if(100 <= N <= 999){
        if (first == last){
            cout << "Yes";
        }else{
            cout << "No";
        }
    }
}