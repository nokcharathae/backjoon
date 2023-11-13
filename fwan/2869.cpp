#include <iostream>
using namespace std;
int main(void){
	int a, b, v, day_int, day_mod;
	cin >> a >> b >> v;
	day_int = (v - a) / (a - b);
	day_mod = (v - a) % (a - b); // 나머지 연산
	int day = (day_mod == 0) ? day_int + 1 : day_int + 2;
	cout << day;
}