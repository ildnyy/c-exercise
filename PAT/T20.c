#include <stdio.h>

int main(){
	int m,n;
	scanf_s("%d", &m);
	while (m--){
		scanf_s("%d", &n);
		int cur = 1;
		double sum = 0;
		for (int i = 1;i <= n;i++){
			if (cur) {
				sum += 1.0 / i;
			}
			else {
				sum -= 1.0 / i;
			}
			cur = 1 - cur;
		}
		printf("%.2f\n", sum);
	}
	return 0;
}