#include <stdio.h>

int main(void){

	int i,j;
	int tensu1[4][3];
	int tensu2[3][4];

	printf("请输入一个三行四列矩阵的值：\n");
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 4; j++) {
        	scanf_s("%d", &tensu2[i][j]);
		}
	}

	printf("请输入一个四行三列矩阵的值：\n");
	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 3; j++) {
			scanf_s("%d", &tensu1[i][j]);
		}
	}

	for ( i= 0; j < 3; i++)
	{
		for (j = 0; j < 4; j++) {
			printf("乘积%d", tensu2[i][j] * tensu1[i][j]);
		}
		putchar('\n');
	}
	return 0;
}
