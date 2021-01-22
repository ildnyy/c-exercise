#include <stdio.h>
#include <string.h>

int main() {
	int N;
	long long a[100];
	int	b[100], c[100];
	scanf("%d", &N);
	for (int i = 0;i < N;i++) {
		scanf("%lld %d %d", &a[i], &b[i], &c[i]);
	}
	int M,d[100];
	scanf("%d", &M);
	for (int i = 0;i < M;i++) {
		scanf("%d", &d[i]);
	}
	for (int i = 0;i < M;i++) {
		for (int j = 0;j < N;j++) {
			if (d[i] == b[j]) {
				printf("%lld %d", a[j], c[j]);
			}
		}
	}
	return 0;
}
