#include <stdio.h>

int str_char(const char s[], int c) {
	int num=0;
	int i = 0;
	while (s[num] != '\0'){
		if (s[num] == c) {
			i++;
		} 
		num++;
	}
	if (s[num] == '\0')
		num = -1;
	return i;
}
int main(void){
	char s[] = "abcabcabc";
	int r;
	char c;
	printf(" c = ");
	scanf_s("%c", &c);
	r = str_char(s, c);
	printf("¸öÊıÎª£º%d", r);

	return 0;
}
