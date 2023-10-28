#include <iostream>

using namespace std;

int main()
{
    int num1, num2;
    cin>>num1>>num2;
    if(num1>0)
    {
        if(num2>0)
            cout<<1;
        else if(num2<0)
            cout<<4;
    }
    else if(num1<0)
        if(num2>0)
            cout<<2;
        else if(num2<3)
            cout<<3;
    return 0;
}