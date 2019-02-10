#include<stdio.h>
#include<string.h>
int main(){
	char s1[100]={0},s2[100]={0},s_output[100]={0};
	int i,j,h=0;
	scanf("%s",s1);
	scanf("%s",s2);
	for(i=0;i<strlen(s1);i++){
		if((strchr(s2,s1[i])==0)&&(strchr(s_output,s1[i])==0)){
			if((s1[i])>='a'&&(s1[i])<='z'){
				s1[i]-=32;
			}
			if((strchr(s_output,s1[i])==0)){
				s_output[h]=s1[i];
				h++;
			}
			
		}
	}
	for(i=0;i<strlen(s_output);i++){
		printf("%c",s_output[i]);
	}
	return 0;
}