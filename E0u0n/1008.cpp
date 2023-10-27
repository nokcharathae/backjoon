#include <iostream>

using namespace std;

int main()
{
    double num1, num2;
    cin>>num1>>num2;
    cout.precision(9); // 정수포함 9자리로 설정
    cout << fixed; // 소수점 아래 9자리로 고정
    cout<<num1/num2;
    cout.unsetf(ios::fixed); // fixed 해제

    return 0;
}