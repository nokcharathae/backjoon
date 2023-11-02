#include <iostream>

using namespace std;

int main(){
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    string s;
    cin>>s;
    int arr[26];

    for(int j=0; j<26; j++)
        arr[j]=-1;

    for(int i=0; i<s.length(); i++)
    {
        for(int j=0; j<26; j++)
        {
            if(arr[j]==-1)
            {
                if(s[i]==j+97)
                {
                    arr[j]=i;
                    continue;
                }
            }
        }
    }

    for(int j=0; j<26; j++)
        cout<<arr[j]<<' ';

    return 0;
}

