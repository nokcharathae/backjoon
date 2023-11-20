#include <iostream>
using namespace std;

void BaseConversion(string s, int b)
{
    int ans = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if ('0' <= s[i] && s[i] <= '9') {
            ans = ans * b + (s[i] - '0');
        } else {
            ans = ans * b + (s[i] - 'A' + 10);
        }
    }
    cout << ans;
}

int main() 
{
    string n;
    int b;
    cin >> n >> b;
    BaseConversion(n, b);
    cout << "\n";

}