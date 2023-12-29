#include <iostream>
using namespace std;

void PRO_E(){
    // input
    int N; cin >> N;
    int numbers[N];


    // process

    // index, value
    int max[2] = {0, 0}; int min[2] = {0, 1000000};
    for(int x = 0; x < N; x++){
        cin >> numbers[x];
        if(numbers[x] > max[1]){
            max[1] = numbers[x];
            max[0] = x;
        }
        if(numbers[x] < min[1]){
            min[1] = numbers[x];
            min[0] = x;
        }
    }

    // output
    numbers[min[0]] = max[1];
    numbers[max[0]] = min[1];
    
    for(int x : numbers){
        cout << x << " ";
    }
    cout << endl;

}

int main(){
    // PRO_E
    PRO_E();

    return 0;
}