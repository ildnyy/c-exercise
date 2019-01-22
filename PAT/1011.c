#include<stdio.h>
int main(){
	double a[10][100];
	int i,j;
	int T;

	scanf("%d", &T);
	for (i = 0;i < T; i++) {
		for (j = 0;j < 3;j++) {
			scanf("%lf ", &a[i][j]);
		}
	}
	for (i = 0;i < T;i++) {
		if (a[i][0] + a[i][1] > a[i][2]) {
			printf("Case #%d: true\n", i+1);
		}
		else
			printf("Case #%d: false\n", i+1);
	}

	return 0;
}