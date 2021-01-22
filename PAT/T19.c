#include<stdio.h>
#include<math.h>

int main(){
	int a, b;
	int n;
	int i;
	int max = 0;
	double j = 0;

	scanf_s("%d", &n);
	for (i = 0;i < n;i++) {
		scanf_s("%d %d", &a, &b);
		if (max < (a*a + b * b)) {
			max = a * a + b * b;
		}
	}
	j = sqrt(max);
	printf("%0.2f", j);
	return 0;
}