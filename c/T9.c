#include<stdio.h>

int main(void){
	int years, months, days, i;

	scanf_s("%d/%d/%d", &years, &months, &days);
	if (years % 4 == 0 && years % 100 != 0 || years % 400){
		int sum = 0;
		int a[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
		for (i = 0;i < months - 1;i++)
			sum += a[i];
		sum = sum + days;
		printf("%d\n", sum);
	}
	else{
		int sum = 0;
		int a[12] = { 31,29,31,30,31,30,31,31,30,31,30,31 };
		for (i = 0;i < months - 1;i++)
			sum += a[i];
		sum = sum + days;
		printf("%d\n", sum);

	}
	return 0;
}