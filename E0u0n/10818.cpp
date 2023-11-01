#include <iostream>

using namespace std;

int main(){
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int N, min=1000000, max=-1000000;
    cin>>N;
    
    int A[N];
    for(int i=0; i<N; i++)
    {
        cin>>A[i];
        if(min>A[i])
            min=A[i];
        if(max<A[i])
            max=A[i];
    }
    cout<<min<<' '<<max;

    return 0;
}