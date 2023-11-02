#include <iostream>
#include <string>
using namespace std;

int main() {
    int A[9][9];
    for(int i=0;i<9;i++)
        for(int j=0;j<9;j++)
            cin >> A[i][j];
    int a = A[0][0], x=0,y=0;
    for(int i=0;i<9;i++)
            for(int j=0;j<9;j++)
            if(a<A[i][j]){
                a = A[i][j];
                x = i;
                y = j;
            }
    cout << a << endl << x+1 << " " << y+1;
}
