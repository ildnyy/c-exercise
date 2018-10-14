#include <stdio.h>

#define NUM 6

void intary_rcpy( int v1[],const int v2[], int n)
{
	int i;
	for (i = 0; i < n/2; i++)
	{
		v1[n - 1 - i] = v2[i];
	}
	return;
}

int main(void)
{
	int i;
	int a[NUM];
	int b[NUM] = { 22,55,66,77,88,99 };
	intary_rcpy(a,b,NUM);
	for (i = 0; i < NUM; i++)
	{
		printf("a[%d] = %d\n",i,a[i]);
	}
	return 0;
}