#include <iostream>
#include <cmath>

using namespace std;


int main() {
    long long n, m, a;
    cin >> n >> m >> a;

    long long x = ceil((double)n / a);
    long long y = ceil((double)m / a);

    long long result = x * y;

    cout << result << endl;

    return 0;
}
