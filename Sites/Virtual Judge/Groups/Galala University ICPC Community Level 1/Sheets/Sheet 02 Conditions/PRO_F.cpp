#include <iostream>
using namespace std;

int main() {
    int A, B, C;
    cin >> A >> B >> C;

    int min = A;
    int max = A;

    if (B < min) {
        min = B;
    } else if (B > max) {
        max = B;
    }

    if (C < min) {
        min = C;
    } else if (C > max) {
        max = C;
    }

    cout << min << " " << max;

    return 0;
}