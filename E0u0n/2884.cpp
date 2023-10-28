#include <iostream>

using namespace std;

int main()
{
    int hour, minute;
    cin>>hour>>minute;

    if(minute-45>=0)
        cout<<hour<<' '<<minute-45;
    else
        if(hour==0)
            cout<<23<<' '<<60+minute-45;
        else    
            cout<<hour-1<<' '<<60+minute-45;

    return 0;
}