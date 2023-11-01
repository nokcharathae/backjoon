#include <iostream>

using namespace std;

int main(){
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    
    int num,max=0,index;
    for(int i=1; i<=9; i++)
    {
        cin>>num;
        if(max<num){
            max=num;
            index=i;
        }  
    }

    cout<<max<<'\n'<<index;

    return 0;
}