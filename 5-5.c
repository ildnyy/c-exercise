 #include    <stdio.h>

#define NUMBER 7

int main(void) {
	int i;
	int x[NUMBER];

	for (i = 0; i < NUMBER; i++) {
		printf("x[%d]£º", i);
		scanf_s("%d", &x[i]);
	}

	for (i = 0; i < 3; i++) {
		int temp = x[i];
		x[i] = x[NUMBER - 1 - i];
		x[NUMBER - 1 - i] = temp;
	}
	puts("µ¹ÐòÅÅÁÐÁË¡£");
	for (i = 0;i < NUMBER;i++)
		printf("x[%d]=%d\n", i, x[i]);
	 
	return 0;
}