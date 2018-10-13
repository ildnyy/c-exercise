#include <stdio.h>
#define NUM 5

int min_of(const int v[],int n)
{
	int i;
	int min = v[0];
	for (i = 1;i < n;i++)
		if (min > v[i])
			min = v[i];
	return min;
}

int main(void) 
{
	int i;
	int a[NUM] = { 11,22,33,44,55 };
	int min;
	min = min_of(a, NUM);

	printf("数组最小值%d", min);

	return 0;
}
