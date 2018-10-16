#include <stdio.h>

#define swap(int,a,b) {int i;i=a;a=b;b=i;}
 
int main(void){
	int a = 5;
	int b = 6;
	swap(int, a, b);

	printf("»¥»»ºó£º%d  %d\n", a,b);
	
	return 0;
}
