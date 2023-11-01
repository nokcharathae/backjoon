#include <iostream>

using namespace std;

int main(){
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    
    int N,M,num_i,num_j, temp;
    cin>>N>>M;
    int arr[N];

    for(int j=0; j<N; j++)
        arr[j]=j+1;

    for(int i=0; i<M; i++)
    {
        cin>>num_i>>num_j;

        for(int k=0; k<(num_j-num_i+1)/2; k++)
        {
            temp=arr[num_i-1+k];
            arr[num_i-1+k]=arr[num_j-1-k];
            arr[num_j-1-k]=temp;
        }
    }
    
    for(int l=0; l<N; l++)
        cout<<arr[l]<<' ';

    return 0;
}