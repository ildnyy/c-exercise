#include<stdio.h>

int main(void) {
	int a;
	int i;
	int n;
	char ch;

	scanf_s("%d", &n);
	for (i = 0;i < n;i++) {
		scanf_s("%d", &a);
		ch = a;
		printf("%c", ch);
	}

	return 0;
}