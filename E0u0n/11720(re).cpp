#include <iostream>

using namespace std;

int main(){
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int N, sum=0;
    char s;
    cin>>N;


    for(int i=0; i<N; i++)
    {
        cin>>s;
        sum+=int(s)-48;
    }
    cout<<sum;
    return 0;
}

