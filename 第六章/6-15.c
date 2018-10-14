#include <stdio.h>
static int i;
void put_count() {
	return i++;
}

int main(void)
{
	put_count();
	printf("put_count:第%d次\n", i);
	put_count();
	printf("put_count:第%d次\n", i);
	put_count();
	printf("put_count:第%d次\n", i);

	return 0;
}
