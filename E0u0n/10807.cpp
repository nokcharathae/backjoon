#include <iostream>

using namespace std;

int main(){
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int N,num,sum=0;
    cin>>N;
    int arr[N];
    for(int i=0; i<N; i++)
        cin>>arr[i];

    cin>>num;
    for(int i=0; i<N; i++){
        if(num==arr[i])
            sum+=1;
    }
    cout<<sum;

    return 0;
}