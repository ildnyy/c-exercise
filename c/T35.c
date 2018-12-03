#include<stdio.h>
int main() {
	int T, n, i;
	double height[110], max;
	scanf("%d", &T);
	while (T--) {
		scanf("%d", &n);
		for (i = 1;i <= n;i++)
			scanf("%lf", &height[i]);
		max = height[1];
		for (i = 2;i <= n;i++)
			if (max < height[i])
				max = height[i];
		printf("%.2lf\n", max);
	}
	return 0;
}
