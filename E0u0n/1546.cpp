#include <iostream>

using namespace std;

int main() {
    int N;
    double sum=0,m=0;
    cin>>N;
    double arr[N];
    for(int i=0; i<N; i++)
    {
        cin>>arr[i];
        if(m<arr[i])
            m=arr[i];
    }
    for(int i=0; i<N; i++)
    {
        sum+= arr[i]/m*100;
    }

    cout<<sum/N<<endl;
    return 0;
}