#include <iostream>
using namespace std;
int main() {
    long N,min=0,max=0;
    cin >> N;
    long M[N];
    for(int i=0;i<N;i++){
        cin >> M[i];
    }
    min = M[0];
    for(int i=0;i<N;i++){
        if(min > M[i])
            min = M[i];
        if(max < M[i])
            max = M[i];
    }
    cout << min << " " << max << endl;
}
