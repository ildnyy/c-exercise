#include <stdio.h>
int gcd(int x,int y) {
	int z;
	if (x != y)
	{
		if (x > y)
			x -= y;
		else
			y -= x;
		z = gcd(x, y);
	}
	else
		z = x;
	return z;
}

int main(void) {
	int x,y;
	printf("输入两个正整数：\n");
	scanf_s("%d", &x);
	scanf_s("%d", &y);
	printf("gcd(%d,%d)=%d\n", x,y, gcd(x,y));

	return 0;
}
