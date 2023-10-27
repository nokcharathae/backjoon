#include <iostream>

using namespace std;

int main()
{
    int num1, num2;
    cin>>num1;
    cin>>num2;

    int n1 = (num2 / 100) * num1;
    int n2 = ((num2%100) / 10) * num1;
    int n3 = (num2 % 10) * num1;

    cout<< n3<<"\n"<< n2<<"\n"<< n1<<"\n"<< n1*100+n2*10+n3;

    return 0;
}