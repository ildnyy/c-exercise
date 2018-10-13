#include <stdio.h>

#define NUM 6

void rev_intary(int v[], int n)
{
	int tmp;
	int i;
	for (i = 0; i < n/2; i++)
	{
		tmp = v[i];
		v[i] = v[n - 1 - i];
		v[n - 1 - i] = tmp;
	}
	return;
}

int main(void)
{
	int i;
	int a[NUM] = {24,56,78,52,34,66};
	rev_intary(a,NUM);
	for (i = 0; i < NUM; i++)
	{
		printf("a[%d] = %d\n",i,a[i]);
	}
	return 0;
}