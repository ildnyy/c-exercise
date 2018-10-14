#include <stdio.h>

void mat_mul(const int a[4][3], const int b[4][3], int c[1][4][3]) {
	int i, j;
	for(i=0;i<4;i++)
		for (j = 0;j < 3;j++) {
			c[0][i][j] = a[i][j];
			c[1][i][j] = b[i][j];
		}
}
void mat_print(const int m[2][4][3]) {
	int i, j;
	printf("第一次分数\n");
	for (i = 0;i < 4;i++) {
		for (j = 0;j < 3;j++)
			printf("%4d", m[0][i][j]);
		putchar('\n');
	}
	printf("第二次分数\n");
	for (i = 0;i < 4;i++) {
		for (j = 0;j < 3;j++)
			printf("%4d", m[1][i][j]);
		putchar('\n');
	}
}

int main(void)
{
	int i, j;
	int a[4][3] = { {1,2,3} ,{4,5,6} ,{7,8,9} ,{10,11,12} };
	int b[4][3] = { {1,2,3}, {5,6,7}, {9,10,11},{13,14,15} };
	int c[2][4][3] = { 0 };
	mat_mul(a, b, c);
	puts("考试的分数");  mat_print(c);

	return 0;
}
