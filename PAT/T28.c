#include<stdio.h>
#include<string.h>
int main(void) {
	
	int i,n,j;
	int cont[1000] = { 0 };
	
	scanf_s("%d", &n);
	for (i = 0;i < n+1;i++) {
		char c[1000] = { 0 };
		gets(c);
		for (j = 0;j<strlen(c);j++) {
			if (c[j] >= '0'&&c[j] <= '9') {
				cont[i+1]++;
			}
		}
	}
	for (i = 1;i < n+1;i++) {
		printf("%d\n", cont[i+1]);
	}
	return 0;
}