#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(0); // false
    cin.tie(0); // NULL
    cout.tie(NULL); // 0
    
    int n, arr[10000] = {0, };
    cin >> n;
    
    while(n--) {
        int num; cin >> num;
        arr[num - 1]++;
    }
    
    for(int i = 0; i < 10000; i++) {
        while(arr[i]--) {
            cout << i + 1 << '\n';
        }
    }
}