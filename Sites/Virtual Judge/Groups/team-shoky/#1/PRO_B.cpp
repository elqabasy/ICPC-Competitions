#include <iostream>
using namespace std;

#define ll long long

/* B - Follow the equation */
ll int f(ll int x){
    // return (long double)pow(x, 2) + 2 * x + 3;
    return (ll int)(x * x + 2 * x + 3);
}

void PRO_B(){
    // input
    unsigned short int t = 0; cin >> t;
    /*
        // define function with lambda expression
        auto f = [](double x){
            return (double)pow(x, 2) + 2 * x + 3;
        };    
    */

    // process
    auto result = 0;
    cout << (ll int)(f(f(f(t)+t)+f(f(t)))) << endl; // this line copied as it from Problem B.

    // output
}

int main(){
    // settings for preformance
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // PRO_B
    PRO_B();

    return 0;
}


/* Sources
    https://learn.microsoft.com/en-us/cpp/cpp/lambda-expressions-in-cpp?view=msvc-170
*/