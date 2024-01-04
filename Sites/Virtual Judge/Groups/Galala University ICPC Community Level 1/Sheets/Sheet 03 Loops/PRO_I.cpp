//
// Created by Mahros on 10/28/2023.
//
#include <iostream>
#include <vector>
using namespace std;

vector<int> getBetweenNumbers(int x, int y){
    vector<int> result = {};
    if(x > y){
        for(int z = y; z <= x; z++) {
            result.push_back(z);
        }
    } else{
        for(int z = x; z <= y; z++) {
            result.push_back(z);
        }
    }

    return result;
}

void print(const vector<int>& data, const string& sep, const string& end){
    for(int val : data){
        cout << val << sep << end;
    }
}
int sum(int n, int z) {
    if (n == z) {
        return n;
    } else if (n < z) {
        return n + sum(n + 1, z);
    } else {
        return n + sum(n - 1, z);
    }
}

void SAMPLE_I(){
    // cout << getBetweenNumbers(1, 5).at(4);
    while (true){
        int N, M = 0; cin >> N >> M;
        if (!(N <= 0 || M <= 0) && (-100 <= N && N <= 100) && (-100 <= M && M <= 100)){
            vector<int> numbers = getBetweenNumbers(N, M);
            print(numbers, " ", "");
            cout << "sum =" << sum(N, M) << endl;
        } else{
            break;
        }
    }
}




int main() {
    SAMPLE_I();
    return 0;
}
