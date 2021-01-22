#include <stdio.h>
#include <string.h>

int main() {
	int N;
	scanf("%d", &N);
	char name[10], young_name[10], old_name[10];
	int year, month, day, cnt = 0;
	int maxAge = 2014 * 10000 + 9 * 100 + 7;
	int minAge = 1814 * 10000 + 9 * 100 + 5;
	int maxAge1 = 2014 * 10000 + 9 * 100 + 7;
	int minAge1 = 1814 * 10000 + 9 * 100 + 5;
	for (int i = 0; i < N; i++) {
		scanf("%s %d/%d/%d", name, &year, &month, &day);
		int age = year * 10000 + month * 100 + day;
		if (age < maxAge && age > minAge) {
			cnt++;
			if (age < maxAge1) {
				maxAge1 = age;
				strcpy(old_name, name[i]);
			}
			if (age > minAge1) {
				minAge1 = age;
				strcpy(young_name, name[i]);
			}
		}
	}
	if (cnt != 0) {
		printf("%d %s %s\n", cnt, old_name, young_name);
	}
	else {
		printf("0\n");
	}
	return 0;
}