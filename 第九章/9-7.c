#include <stdio.h>

void put_stringn(const char s[], int n) {
	int j;
	for (j = 0;j < n;j++) {
		int i = 0;
		while (s[i]) {
			putchar(s[i]);
			i++;
		}
	}
}
int main(void){
	char s[3] = "A";
	int n = 3;

	printf("ÊäÈëÁË£º");
	put_stringn(s,n);
	printf("¡£\n");

	return 0;
}
