#include<stdio.h>
#include<string.h>
int main() {
	char N[100],s[110];
	int n=strlen(N);
	int sum=0;
	char ref[10][5] = { "ling","yi","er","san","si","wu","liu","qi","ba","jiu" };

	scanf_s("%s", N);
	for (int i = 0;i < n;i++) {
		sum += (N[i] - '0');
	}
	int i = 0;
	while (sum != 0) {
		s[i] = (sum % 10) + '0';
		sum /= 10;
		i++;
	}
	int j = strlen(s);
	for (int i = j - 1;i >= 0;i--) {
		printf("%s", ref[s[i] - '0']);
		if (i > 0) printf(" ");
	}
	
	return 0;
}
