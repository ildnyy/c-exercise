#include<stdio.h>
#include<math.h>

void  main(){

	int a[100], n, i, j, t, k;

	while (scanf_s("%d", &n) && n!=0){
		for (i = 0;i < n;i++){
			scanf_s("%d", &a[i]);
		}
		for (i = 0;i <= n - 2;i++){
			for (j = i + 1;j <= n - 1;j++)
				if (abs(a[j]) > abs(a[i])){
					t = a[j];
					a[j] = a[i];
					a[i] = t;
				}
		}

		for (i = 0;i < n;i++){
			if (i < n - 1)
				printf("%d ", a[i]);
			else 
				printf("%d", a[i]);
		}
		printf("\n");
	}
	return 0;
}