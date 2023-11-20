#include<iostream>
using namespace std;

int main(){
    int a,b,num=0;
    cin >> a >> b;
    for(int i=1;i<=a;i++){
        if(a%i==0) num++;
        if(num==b) {cout << i << endl; break;}
    }
    if(num<b) cout << 0 << endl;
}