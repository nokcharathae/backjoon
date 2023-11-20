#include <iostream>

using namespace std;

int main()
{
    int i;
    i = 123;

    cout<<i<<" "<<sizeof(i)<<endl; //4
    cout<<i<<" "<<sizeof(int)<<endl; //4

    float f=123.456f;
    double d=123.456f;

    cout<<f<<" "<<sizeof(f)<<endl; //4
    cout<<d<<" "<<sizeof(d)<<endl; //8

    char c='a';
    char str[]="Hello, Workld!";

    cout<<c<<" "<<sizeof(c)<<endl; //1
    cout<<str<<" "<<sizeof(str)<<endl; //15 

}