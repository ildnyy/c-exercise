
#include <stdio.h>
#define NUM 6

int main(void)
{
	int i;
	char s[NUM][128];
	
	for (i = 0;i < NUM;i++) {
		printf("s[%d]:", i);
		scanf_s("%s", s[i]);
		if (strcmp(s[i], "$$$$$") == 0)
			break;
	}
	for (i = 0;i < NUM;i++) {
		printf("s[%d]=\"%s\"\n", i,s[i]);
		if (i >= NUM)
			printf("$$$$$");
	}
	return 0;
}
