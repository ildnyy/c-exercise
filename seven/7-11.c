#include <stdio.h>

int main(void){
	float x1 = -0.01;
	float x2 = 0;
	int i;
	float sum1=0;
	float sum2=0;

	for (i = 0;i<=100;i++)	{
		printf("x = %f     x = %f\n", x1+=0.01,(x2++)/100);
		sum1 += x1;
		sum2 += x2 / 100;
	}
	printf("sum = %f    sum = %f", sum1, sum2);

	return 0;
}
