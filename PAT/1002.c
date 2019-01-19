#include<stdio.h>
#include<string.h>
int main() {
	char num[101];
	int result[3];
	char py[10][5] = { "ling", "yi", "er", "san", "si", "wu", "liu", "qi", "ba", "jiu" };
	gets(num);
	int sum = 0, i, j = 0;
	for (i = 0;i < strlen(num);i++) {
		sum += num[i] - '0';
	}
	while (sum) {
		result[j++] = sum % 10;
		sum /= 10;
	}
	for (i = j - 1;i > 0;i--) {
		printf("%s ", py[result[i]]);
	}
	printf("%s", py[result[0]]);
	return 0;
}
