#include<iostream>
using namespace std;


int main(){
    int j[4][2];
    for(int i=0;i<3;i++)
            cin >> j[i][0] >> j[i][1];
    for (int i = 0; i < 2; i++)
    {
        if (j[0][i] == j[1][i]) j[3][i] = j[2][i];
        else if (j[1][i] == j[2][i])  j[3][i] = j[0][i];
        else if (j[0][i] == j[2][i]) j[3][i] = j[1][i];
    }
    cout << j[3][0] << " " << j[3][1] << endl;
}