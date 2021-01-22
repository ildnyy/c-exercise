#include<stdio.h>
int main()
{
	int n, m;
	int i, j;
	int number;
	int sum = 0;
	scanf("%d%d", &n, &m);
	int str1[m];
	int str2[m];
	for (i = 0;i < m;i++)
		scanf("%d", &str1[i]);
	for (i = 0;i < m;i++) {
		scanf("%d", &str2[i]);
	}
	for (i = 0;i < n;i++) {
		for (j = 0;j < m;j++) {
			scanf("%d", &number);
			if (number == str2[j] == 1) {
				sum += str1[j];
			}
		}
		printf("%d\n", sum);
		sum = 0;
	}
	return 0;
}
