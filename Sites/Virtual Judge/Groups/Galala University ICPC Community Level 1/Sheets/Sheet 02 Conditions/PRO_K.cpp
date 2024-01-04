#include <iostream>

using namespace std;

int main() {
    // inputs
    // string input, result;
    int num1; char op; int num2; string a4; int result;
    cin >> num1 >> op >> num2 >> a4 >> result;



    // cout << num1 << endl;
    // cout << op << endl;
    // cout << num2 << endl;
    // cout << a4 << endl;
    // cout << result << endl; 
    int r = result;
    switch (op)
    {
    case '+':
        result = num1 + num2;
        break;
    case '-':
        result = num1 - num2;
        break;
    case '*':
        result = num1 * num2;
        break;
    
    default:
        break;
    }

    if(r == result){
        cout << "Yes";
    }else{
        cout << result;
    }



    // output
    // cout << result;
    return 0;
}




















// #include <iostream>

// using namespace std;

// int main() {
//     // inputs
//     char input, result;
//     cin >> input;


//     // process
//     if(islower(input)){
//         result = toupper(input);
//     }else{
//         result = tolower(input);
//     }


//     // output
//     cout << result;
//     return 0;
// }