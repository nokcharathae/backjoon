#include <iostream>

using namespace std;

int main(){
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    
    string s;
    int c,num=0;
    cin>>s;
    int a[s.length()]={0,};

    for(int i=1; i<s.length(); i++)
    {        
        for(int j=0; j<i; j++)
        {
            
            if(s[j]==s[i] or s[j]==s[i]-32 or s[j]==s[i]+32)
            {
                a[j]++;
                a[i]++;
                c=s[j];
                cout<<s[j]<<'\n';
                cout<<i<<", "<<j<<", "<<a[j]<<'\n';
            }
            if(num<a[j])
                num=a[j];
        }
    }

    if(c>=97)
        cout<<char(c-32);
    else
        cout<<char(c);

    return 0;
}