#include <iostream>

using namespace std;

int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    if(a==b and c==a)
        cout<<10000+a*1000;
    else if(a==b or b==c or c==a)
        if(a==b)
            cout<<1000+a*100;
        else if(b==c)
            cout<<1000+b*100;
        else
            cout<<1000+a*100;

    else
        cout<<max(max(a,b),c)*100;
    
    return 0;
}