#include <iostream>

using namespace std;

int main()
{
    int hour, minute,count;
    cin>>hour>>minute;
    cin>>count;

    int hour_count=hour+(minute+count)/60;

    if(hour_count >=24)
        cout<<hour_count%24<<' '<<(minute+count)%60;
    else
        cout<<hour_count<<' '<<(minute+count)%60;
    
    return 0;
}