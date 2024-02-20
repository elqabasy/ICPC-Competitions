#include <map>
#include <iostream>
using namespace std;


#define ll long long
void PRO_D(){
    // input
    string data;
    map<int, string, less<string>> mymap = {
        {1, "A"},
        {2, "C"},
        {3, "B"},
        {4, "A"},
        {5, "C"},
        {6, "Z"},
        {7, "N"},
        {8, "l"},
        {9, "a"},
        {0, "b"},
    };


    // process
    for(auto d:mymap){
        cout << d.second << endl;
    }

    // output
}

int main(){
    // settings for preformance
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // PRO_D
    PRO_D();

    return 0;
}