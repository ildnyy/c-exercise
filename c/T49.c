#include<stdio.h>
int main() {
	char c1[80], c2[80], cc[80];
	scanf("%s", c1);
	scanf("\n");
	scanf("%s", c2);
	cc[0] = '\0';
	int i, j = 0, k = 0, l;
	for (i = 0;c1[i] != '\0';i++) {
		if (c1[i] == c2[j])
			j++;
		else {
			int e = 1;
			for (l = 0;l < k;l++) {
				if (cc[l] == c1[i] || (cc[l] == (c1[i] - 'a' + 'A'))) {
					e = 0;
					break;
				}
			}
			if (e) {
				for (l = 0;c2[l] != '\0';l++) {
					if (c2[l] == c1[i] || (c2[l] == (c1[i] - 'a' + 'A'))) {
						e = 0;
						break;
					}
				}
			}
			if (e) {
				if (c1[i] >= 'a' && c1[i] <= 'z')
					cc[k++] = c1[i] - 'a' + 'A';
				else
					cc[k++] = c1[i];
			}
		}
	}
	cc[k] = '\0';
	printf("%s", cc);
}