#include <iostream>

using namespace std;

int main(){
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    
    int N,M,num_i,num_j,k;
    cin>>N>>M;

    int arr[N]={0,};
    for(int i=0; i<M; i++)
    {
        cin>>num_i>>num_j>>k;
        for(int j=num_i-1;j<=num_j-1;j++)
        {
            arr[j]=k;
        }
    }

    for(int l=0; l<N; l++)
    {
        cout<<arr[l]<<' ';
    }

    return 0;
}