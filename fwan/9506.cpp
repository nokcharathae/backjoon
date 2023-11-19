#include<iostream>
using namespace std;

int main(){
    int a,num,j;
    while(1){
        num = 0;
        cin >> a;
        if(a==-1) break;
        for(int i=1;i<a;i++)
            if(a%i==0) {num+=i; j=i;}
        if(num==a){
            cout << a << " = ";
            for(int i=1;i<j;i++)
                if(a%i==0) cout << i << " + ";
            cout << j <<endl;
        }
        else cout << a << " is NOT perfect." << endl;
    } 

}