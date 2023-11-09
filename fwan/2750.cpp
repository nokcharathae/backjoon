#include<iostream>
using namespace std;

int main(){
    int n,tmp;
    cin >> n;
    int N[n];
    for(int i=0;i<n;i++)
        cin>> N[i];
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            if(N[i]<N[j]){
                tmp = N[i];
                N[i] = N[j];
                N[j] = tmp;
            }
    for(int i=0;i<n;i++)
        cout << N[i] << endl;
}