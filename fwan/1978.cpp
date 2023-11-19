#include<iostream>
using namespace std;

bool isPrime1(int n) {
	for (int i = 2; i < n; i++) {
		if (n%i == 0) {//i가 n의 약수라면 소수가 아니므로 false return
			return false;
		}
	}
	//2 ~ n-1까지 약수가 없다면 소수이므로, true return
	return true;
}

int main(){
    int n,num=0;
    cin >> n;
    int N[n];
    for(int i=0;i<n;i++){
        cin >> N[i];
        if(N[i]==1) continue;
        if(isPrime1(N[i])) num++;
    }
    cout << num << endl;
}