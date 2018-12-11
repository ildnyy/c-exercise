#include <stdio.h>  
#include <string.h>  

#define N 100  

int main(void){
	int z, o, j;
	int i;
	char s[N + 1];

	while (scanf("%s", s) != EOF){
		if (strcmp(s, "E") == 0)
			break;
		z = o = j = 0;
		for (i = 0; s[i]; i++){
			if (s[i] == 'Z')
				z++;
			else if (s[i] == 'O')
				o++;
			else
				j++;
		}
		while (z != 0 || o != 0 || j != 0){
			if (z != 0){
				z--;
				printf("Z");
			}
			if (o != 0){
				o--;
				printf("O");
			}
			if (j != 0){
				j--;
				printf("J");
			}
		}
		printf("\n");
	}

	return 0;
}

