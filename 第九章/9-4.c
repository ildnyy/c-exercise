
#include <stdio.h>

void null_string(char s[]) {
	s[0] = '\0';
}
int main(void)
{
	char s[] = "pppapapap";
	null_string(s);
	printf("×Ö·û´®Îª£º\"%s\"\n", s);
}
