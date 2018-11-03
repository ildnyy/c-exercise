#include <stdio.h>

void rev_string(char s[]){
	char tmp[128];
	int j = 0;
	int i;

	while (s[j] != '\0') {
		j++;
	}
	for (i = 0; i < j; i++) {
		tmp[i] = s[j - 1 - i];
	}
	for (i = 0; i < j; i++) {
		s[i] = tmp[i];
	}
	return;
}

int main(void){
	char s[] = "ABC";

	printf("ÄæÏòÊä³ö£º");
	rev_string(s);
	printf("%s", s);

	return 0;
}
