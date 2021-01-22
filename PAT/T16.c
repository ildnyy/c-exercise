#include<stdio.h>
#include<string.h>
int main(void){
	int n,i,j,b;
	char a[100];
	
	scanf_s("%d", &n);
	while(n--){
		int as = 0, es = 0, is = 0, os = 0, us = 0;
		getchar();
		gets(a);
		b = strlen(a);
		for (j = 0;j < b;j++) {
			if (a[j] == '\0') break;
			if (a[j] == 'a'){
				as++;
			}
			if (a[j] == 'e') {
				es++;
			}
			if (a[j] == 'i') {
				is++;
			}
			if (a[j] == 'o') {
				os++;
			}
			if (a[j] == 'u') {
				us++;
			}
		}
	    printf("a:%d\ne:%d\ni:%d\no:%d\nu:%d\n\n", as, es, is, os, us);
	}
	
	return 0;
}

