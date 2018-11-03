#include <stdio.h>
enum sex { male,female };
enum season {spring,summer,autumn,winter };
enum sex select1(void) {
	int temp;
	printf("0，，，male   1，，，female\n");
	scanf_s("%d", &temp);

	return temp;
}
enum season select2(void) {
	int temp;
	printf("0，，，spring   1，，，summer  2，，，autumn  3，，，winter\n");
	scanf_s("%d", &temp);

	return temp;
}

int main(void) {
	enum sex selected1;
	switch (selected1 = select1()) {
	case male:    printf("boy\n"); break;
	case female:  printf("girl\n");break;

	}
	enum season selected2;
	switch (selected2 = select2()) {
	case spring:    printf("spring\n"); break;
	case summer:  printf("summer\n");break;
	case autumn:  printf("autumn\n");break;
	case winter:  printf("winter\n");break;
	}
	
	return 0;
}
