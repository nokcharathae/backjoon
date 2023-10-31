#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;
    int result,n = s.length()/2;
        for(int i=0;i<n;i++){
            if(s[i]==s[s.length()-1-i]) result = 1;
            else {result=0; break;}
        }
    cout << result << endl;
}
