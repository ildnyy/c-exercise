#include <stdio.h>

int main(void)
{
	int a,b;

	puts("输入成绩");
	printf("第一科");scanf_s("%d", &a);
	printf("第二科");scanf_s("%d", &b);

	if (a > 0 && a < 100 && b>0 && b<100 ) {
		switch (a / 10) {
		case 0:case 1:case 2:case 3:case 4:case 5:
			printf("it is not pass");
			break;
		case 6:case 7:case 8:case 9:case 10:
			if (b / 10 >= 6)
				printf("it is pass");
		}
	}
	else
		printf("it is erro");
		return 0;
}