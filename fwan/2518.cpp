#include<iostream>
using namespace std;

bool isPrime1(int n) {
	for (int i = 2; i < n; i++) 
		if (n%i == 0) return false;
	return true;
}

int main(){
    int n,m,num=0,f;
    cin >> n >> m;
    for(int i=n;i<=m;i++){
        if(i==1) continue;
        if(isPrime1(i)){
            f=i; n=i; break;
        }
    }
    for(int i=n;i<=m;i++){
        if(i==1) continue;
        if(isPrime1(i)) num+=i;
    }
    if(num!=0) cout << num << endl << f << endl;
    else cout << -1;
}