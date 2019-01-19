#include <stdio.h>

int main() {
	int n = 0;
	scanf("%d", &n);
	int count = 0;
	int arr[4] = { 0 };
	while (n) {
		arr[count] = n % 10;
		n = n / 10;
		count++;
	}
	int i;
	for (i = 0;i < arr[2];i++)
		printf("B");
	for (i = 0;i < arr[1];i++)
		printf("S");
	for (i = 0;i < arr[0];i++)
		printf("%i", i + 1);

	return 0;
}