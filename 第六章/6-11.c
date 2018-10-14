#include <stdio.h>


int search_idx( int v[], int idx[], int key, int n){
	int i;
	int j = 0;
	v[n] = key;
	for (i = 0;v<n;i++) {
		if (v[i] == key) {
			idx[j] = i;
			j++;
		}
	}
	return j;
}

int main(void)
{
	int i,j;
	int v[7] = { 1,5,7,2,4,7,7 };
	int key = 7;
	int idx[7] = { 0 };
	j = search_idx(v[7], idx, key, 7);
	printf("和key相等的元素个数为%d。\n", j);
	for (i = 0; i < 7; i++)
	{
		printf("idx[%d] = %d\n", i, idx[i]);
	}

	return 0;
}
