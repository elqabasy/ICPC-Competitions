#include <iostream>
using namespace std;

/* Constraints
    - 1 ≤ a,b,c ≤ 6
*/

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    int sum = 7 - a + 7 - b + 7 - c;
    cout << sum;
    return 0;
}