#include <stdio.h>
#include <stdlib.h>

int compare(const void* a, const void* b)    // 오름차순 비교 함수 구현
{
	int num1 = *(int*)a;    // void 포인터를 int 포인터로 변환한 뒤 역참조하여 값을 가져옴
	int num2 = *(int*)b;    // void 포인터를 int 포인터로 변환한 뒤 역참조하여 값을 가져옴

	if (num1 < num2)    // a가 b보다 작을 때는
		return -1;      // -1 반환

	if (num1 > num2)    // a가 b보다 클 때는
		return 1;       // 1 반환

	return 0;    // a와 b가 같을 때는 0 반환
}
int binsearch(int data[], int n, int key);


int main(){
	int n, num, m;
	scanf("%d", &n);

	int card[500000];

	for (int i = 0; i < n; i++)
	{
		scanf("%d", &card[i]);
	}
	qsort(card, n, sizeof(int), compare);
	scanf("%d", &m);
	for (int i = 0; i < m; i++)
	{
		scanf("%d", &num);
		printf("%d ", binsearch(card, n, num));
	}
}

int binsearch(int data[], int n, int key)
{
	int min = 0;
	int max = n - 1;
	int mid;
	while (min <= max)
	{
		mid = (min + max) / 2;
		if (key == data[mid])
			return 1;
		else if (key < data[mid])
			max = mid - 1;
		else if (key > data[mid])
			min = mid + 1;
	}
	return 0;
}