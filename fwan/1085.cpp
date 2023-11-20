#include<iostream>
using namespace std;

int main(){
    int x,y,w,h,m,n;
    cin >> x >> y >> w >> h;
    if(x<w-x) m = x;
    else m = w - x;
    if(y<h-y) n = y;
    else n = h-y;
    int result = (m>n)?n:m;
    cout << result << endl;
}