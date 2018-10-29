#include<stdio.h>

int main(void){
	int m,n;
	int a[100][100];
	int i, j,y=0;
	double ave=0, sum=0;
	double ave2 = 0, sum2 = 0;
	double b[100],c[100];

	scanf_s("%d %d", &m, &n);
	for (i = 0;i < m;i++) {
		for (j = 0;j < n;j++) {
			scanf_s("%d", &a[i][j]);
			sum += a[i][j];
		}
		ave = sum / m;
		sum = 0;
		b[i]=ave;
	}
	for (j = 0;j < n;j++) {
		for (i = 0;i < m;i++) {
			sum2 += a[i][j];
		}
		ave2 = sum2 / n;
		sum2 = 0;
		c[j] = ave2;
	}
	for (i = 0;i < m;i++) {
		int x = 0;
		for(j=0;j<m;j++){
			if(a[i][j]>=c[j])
				x++;
		}
		if(x==n)
			y++;
	}
	for (i = 0;i < m;i++) {
		printf("%0.2f ", b[i]);
	}
	printf("\n");
	for (i = 0;i < n;i++) {
		printf("%0.2f ", c[i]);
	}
	printf("\n");
	printf("%d", y);
	return 0;
}