#include <iostream>

using namespace std;

int max(int x, int y){
    return x > y ? x : y;
}

int main() {
    // inputs
    string text;
    cin >> text;
    

    int maxConsecutiveRainy = 0;
    int currentConsecutiveRainy = 0;
    for(char c : text){
        if(c == 'R'){
            currentConsecutiveRainy++;
        }else{
            currentConsecutiveRainy = 0;

        }
        maxConsecutiveRainy = max(maxConsecutiveRainy, currentConsecutiveRainy);
    }

    cout << maxConsecutiveRainy;  
    // output
    return 0;
}