#include <iostream>

using namespace std;

int main(){
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    
    int N,M,num_i,num_j, temp;
    cin>>N>>M;

    int arr[N]={0,};

    for(int j=0; j<N; j++)
        arr[j]=j+1;

    for(int i=0; i<M; i++)
    {
        cin>>num_i>>num_j;

        temp=arr[num_i-1];
        arr[num_i-1]=arr[num_j-1];
        arr[num_j-1]=temp;
    }

    for(int l=0; l<N; l++)
    {
        cout<<arr[l]<<' ';
    }

    return 0;
}