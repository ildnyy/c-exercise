#include<stdio.h>
int main() {
	int n;
	scanf("%d", &n);
	int t[n];
	for (int i = 0;i < n;i++) {
		scanf("%d", &t[i]);
	}
	int sign[101] = { 0 };
	int save[10000] = { 0 };
	int sub = 0;
	int temp;
	for (int i = 0;i < n;i++) {
		int m = t[i];
		if (sign[m] == 2) {
			continue;
		}
		else sign[m] = 1;
		while (m != 1) {
			if (m % 2 == 1) {
				m = (3 * m + 1) / 2;
				sign[m] = 2;
			}
			else {
				m = m / 2;
				sign[m] = 2;
			}
		}
	}
	for (int i = 0;i < 101;i++) {
		if (sign[i] == 1) {
			save[sub] = i;
			sub++;
		}
	}
	for (int i = 0;i < sub;i++) {
		for (int j = i + 1;j < sub;j++) {
			if (save[i] < save[j]) {
				temp = save[i];
				save[i] = save[j];
				save[j] = temp;
			}
		}
	}
	for (int k = 0;k < sub - 1;k++) {
		printf("%d ", save[k]);
	}
	printf("%d", save[sub - 1]);

	return 0;
}
