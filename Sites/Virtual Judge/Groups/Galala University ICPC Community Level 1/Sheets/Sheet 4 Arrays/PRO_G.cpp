#include <algorithm>
#include <vector>
#include <iostream>

using namespace std;
void PRO_G()
{
    int t = 0, a = 0, b = 0, c = 0;
    cin >> t;

    for (int x = 0; x < t; x++){
        cin >> a >> b >> c;
        vector<int> d = {a, b, c};
        sort(d.begin(), d.end());
        cout << d.at(1) << endl;
    }
}

int main()
{
    // PRO_G
    PRO_G();
    return 0;
}