#include <stdio.h>

int str_char(const char s[], int c) {
	int num=0;
	while (s[num] != '\0'){
		if (s[num] == c)
			break;
		num++;
	}
	if (s[num] == '\0')
		num = -1;
	return num;
}
int main(void){
	char s[] = "abcabcabcc";
	int r;
	char c;
	printf(" c = ");
	scanf_s("%c", &c);
	r = str_char(s, c);
	printf("ÏÂ±êÎª£º%d", r);

	return 0;
}
