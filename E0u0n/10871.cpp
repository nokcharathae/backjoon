#include <iostream>

using namespace std;

int main(){
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int N,X;
    cin>>N>>X;
    
    int A[N];
    for(int i=0; i<N; i++)
    {
        cin>>A[i];
        if(X>A[i])
            cout<<A[i]<<' ';
    }

    return 0;
}