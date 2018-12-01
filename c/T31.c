#include <stdio.h>

int main(){
	int n, a, b;
	scanf_s("%d", &n);
	while (n--) {
		scanf_s("%d %d", &a,&b);
		if (a%b == 0) {
			printf("YES\n");
		}
		if (a%b != 0) {
			printf("NO\n");
		}
	}

	return 0;
}