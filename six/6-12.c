#include <stdio.h>

void mat_mul(const int a[4][3], const int b[3][4], int c[3][3]) {
	int i, j;
	for(i=0;i<3;i++)
		for (j = 0;j < 3;j++) {
			c[i][j] = b[i][0] * a[0][j] + b[i][1] * a[1][j] + b[i][2] * a[2][j] + b[i][3] * a[3][j];
		}
}
void mat_print(const int m[3][3]) {
	int i, j;
	for (i = 0;i < 3;i++) {
		for (j = 0;j < 3;j++)
			printf("%4d", m[i][j]);
		putchar('\n');
	}
}

int main(void)
{
	int i, j;
	int a[4][3] = { {1,2,3} ,{4,5,6} ,{7,8,9} ,{10,11,12} };
	int b[3][4] = { {1,2,3,4},{5,6,7,8},{9,10,11,12} };
	int c[3][3] = { 0 };
	mat_mul(a, b, c);
	puts("³Ë»ýÎª");mat_print(c);

	return 0;
}
