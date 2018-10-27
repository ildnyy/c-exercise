#include <stdio.h>

void del_digit(char s[]){
	char tmp[128];
	int j = 0;
	int i = 0;

	while (s[j] != '\0') {
		if (s[j]<'0' || s[j]>'9') {
			tmp[i] = s[j];
			i++;
		}
		j++;
	}
	for (i = 0;i < j;i++) {
		s[i] = tmp[j];
	}
	return;
}

int main(void){
	char s[] = "AB2C";

	printf("ÄæÏòÊä³ö£º");
	del_digit(s);
	printf("%s", s);

	return 0;
}
