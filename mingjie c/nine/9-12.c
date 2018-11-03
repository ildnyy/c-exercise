#include<stdio.h>
#define STR_NUM 2
void rev_string(char s[][128],int n){
	char tmp[STR_NUM][128];
	int num = 0;
	int i;
	int j;
	for (i = 0; i < STR_NUM; i++)	{
		while (s[i][num] != '\0'){
			num++;
		}
		for (j = 0; j < num; j++){
			tmp[i][j] = s[i][num - 1 - j];
		}
		for (j = 0; j < num; j++){
			s[i][j] = tmp[i][j];
		}
	}
	return;
} int main(void){
	int i;
	char s[STR_NUM][128] = { "ABC","ESC" };
	rev_string(s,STR_NUM);
	printf("ÄæÏòÏÔÊ¾:\n");
	for (i = 0; i < STR_NUM; i++)	{
		printf("s[%d] = %s\n", i,s[i]);
	}
	printf("\n"); 
	return 0;
}
