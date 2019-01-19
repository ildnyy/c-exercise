#include<stdio.h>
int main() {
	int n, score[100], max = 0, min = 100, m = 0, l = 0;
	char name[100][15], number[100][15];
	scanf("%d", &n);
	for (int i = 0;i < n;i++) {
		scanf("%s %s %d", name[i], number[i], &score[i]);
		if (score[i] > max) {
			max = score[i];
			m = i;
		}
		if (score[i] < min) {
			min = score[i];
			l = i;
		}
	}
	printf("%s %s\n", name[m], number[m]);
	printf("%s %s", name[l], number[l]);
	return 0;
}
