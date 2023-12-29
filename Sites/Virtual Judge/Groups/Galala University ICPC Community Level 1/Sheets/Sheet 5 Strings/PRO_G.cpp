#include <iostream>

using namespace std;
void PRO_G(){
    int t = 0; cin >> t; 

    for(int x = 0; x < t; x++){
        int n = 0; cin >> n;
        string S; cin >> S;
        int posX=0, posY=0; bool touched = 0;
        for(int y = 0; y < n; y++){
            switch (S[y])
            {
            case 'U':
                posY++;
                break;
            
            case 'D':
                posY--;
                break;
            case 'R':
                posX++;
                break;
            case 'L':
                posX--;
                break;
            }
            // printf("(%d, %d)\n", posX, posY);
            if(posX == 1 && posY == 1){
                touched = true;
                break;
            }
        }
        if(touched){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
        // exit(0);
    }
}

int main()
{
    // PRO_G
    PRO_G();
    return 0;
}


/*

1
7
UUURDDL
*/