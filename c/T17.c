#include<stdio.h>

int main(){
	int M, N;
	int i, j;
	int b=2,c=0;
	int a[100];
	
	scanf_s("%d %d", &M, &N);
	for (i = 2;i < 200;i++) {
		b++;
		for (j = 2;j <= b/2;j++) {
			if (b%j != 0) {
				a[c] = b;
				c++;
			}
		}
	}
	for (i = M;i < N;i++) {
		printf("%d", a[i]);
	}
	return 0;
}