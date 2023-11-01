#include <iostream>

using namespace std;

int main(){
int A,B=0,C=0,arr[10];

for(int i=0; i<10; i++)
{
    cin>>A;
    arr[i]=A%42;
    for(int j=0; i>j; j++)
    {
        if(arr[j]!=arr[i])
            B++;
    }
    if(B==i)
        C++;
    B=0;
}
cout<<C;

return 0;
}