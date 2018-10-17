#include <stdio.h>

#define NUM1 5
#define NUM2 128

void put_strary(const char s[][NUM1], int n) {
	int i;
	for (i = 0; i < n; i++){
		if (strcmp(s[i], "$$$$$") == 0)
			break;
		else
			printf("s[%d] = \"%s\"\n", i, s[i]);
	}

}

int main(void) {
	int i;
	char s[NUM1][NUM2];
	for (i = 0; i < NUM1; i++) {
		printf("s[%d] = ", i);	
		scanf_s("%s", s[i]);	
		if (strcmp(s[i], "$$$$$") == 0)
			break;
	}

	put_strary(s, NUM1);

	return 0;
}
