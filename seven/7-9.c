#include <stdio.h>
#include <math.h>

int main(void){
	double area;

	printf("输入面积:");
	scanf_s("%lf",&area);
	printf("边长: %.0lf\n",sqrt(area));

	return 0;
}
