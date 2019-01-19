#include <stdio.h>
int main() {
	char c;
	int num;
	scanf("%d", &num);
	while (getchar() != '\n');
	for (int i = 0; i < num; i++) {
		int pos = 0, count[3] = { 0, 0, 0 };
		while ((c = getchar()) != '\n') {
			if (c == 'A')                    count[pos]++;
			else if (c == 'P' && pos == 0)   pos = 1;
			else if (c == 'T' && pos == 1)   pos = 2;
			else                            break;
		}
		if (c == '\n' && pos == 2 && count[1] && count[2] == count[1] * count[0])
			puts("YES");
		else
			puts("NO");
		if (c != '\n') while ((c = getchar()) != '\n');
	}
	return 0;
}