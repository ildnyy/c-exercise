#include<stdio.h>
#include<string.h>

int main() {
	char str[1000];
	int letter[26] = { 0 };
	int i, j, max, max_i;
	gets(str);
	for (j = 0;j < 26;j++) {
		for (i = 0;i < strlen(str);i++) {
			if (str[i] == (char)(j + 97) || str[i] == (char)(j + 65))
				letter[j]++;
		}
	}
	max = letter[0];max_i = 0;
	for (i = 0;i < 26;i++) {
		if (max < letter[i]) {
			max = letter[i];
			max_i = i;
		}
	}
	printf("%c %d", (char)(max_i + 97), max);
	return 0;
}
