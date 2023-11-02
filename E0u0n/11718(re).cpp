#include <iostream>
#include <string>

using namespace std;

int main()
{
    ios::sync_with_stdio; cin.tie(NULL); cout.tie(NULL);

    string S;

    while(true)
    {
        getline(cin,S);
        if(S=="") break;

        cout<<S<<'\n';
    }
    
    return 0;

}