#include<stdio.h>
int main (){
	int n;
	int a[1005];
	int i;
	a[1]=0;
	a[2]=2;
	a[3]=2;

	while(scanf_s("%d",&n),n){
		for (i = 4;i <= 1000;i++) {
			a[i] = (a[i - 1] + a[i - 2] * 2) % 10000;
		}
		printf("%d\n",a[n]);
	}

	return 0;
}
