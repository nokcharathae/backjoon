#include <iostream>

using namespace std;

int main(){
    int n, min, arr[30]={0,};

    for(int i=0; i<28; i++)
    {
        cin>>n;
        arr[n-1]=n;
    }

    for(int i=0; i<30; i++)
    {
        if(arr[i]==0)
        {
            cout<<i+1<<endl;
        }
    }

    return 0;
}