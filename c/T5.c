#include <stdio.h>

int main(void)
{
	int a;
	int i,j;

	for (a = 3;a <=100; a++) {
		j = 1;
		for (i = 2;i < a;i++) {
			if (a%i == 0)
				j=0;
		}
		if (j==1)
			printf("%d ", a);
	}


	return 0;
}