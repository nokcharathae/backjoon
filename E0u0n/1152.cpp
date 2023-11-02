#include <iostream>
#include <string>

using namespace std;

int main()
{
    ios::sync_with_stdio; cin.tie(NULL); cout.tie(NULL);

    string S;
    int count=1;

    getline(cin,S);

    for(int i=0; i<S.length(); i++)
    {
        if(S[i]==' ' and i!=0 and i!=S.length()-1)
            count++;
    }

    if(S.length()==1 and S[0]==' ')
        count=0;
    cout<<count;
    
    return 0;

}