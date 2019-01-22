#include<stdio.h>
#include<string.h> 
int main(){
   	char str1[61],str2[61],str3[61],str4[61];
   	gets(str1);
   	gets(str2);
   	gets(str3);
   	gets(str4);
   	int n=0;
   	int i,j;
   	int mark=0;
   	char Day[][4]={"MON","TUE","WED","THU","FRI","SAT","SUN"};
   	for(i=0;i<strlen(str1)&&i<strlen(str2);i++){
   		if(str1[i]!=str2[i]&&str1[i]<'A'||str1[i]>'G')
   			n++;
   		if(str1[i]==str2[i]&&str1[i]>='A'&&str1[i]<='G'){
				printf("%s ",Day[str1[i]-'A']);
				mark=i;
				break;
		}
	}
	for(j=mark+1;j<strlen(str1)&&j<strlen(str2);j++){
   		if(str1[j]==str2[j]){
			if(str1[j]>='A'&&str1[j]<='N'){
				printf("%d:",str1[j]-'A'+10);
				break;
			}
			else if(str1[j]>='0'&&str1[j]<='9'){
				printf("0%c:",str1[j]);
				break;
			}
		}
	}
	for(i=0;i<strlen(str3)&&i<strlen(str4);i++){
   		if(str3[i]==str4[i]&&((str3[i]>='A'&&str3[i]<='Z')||(str3[i]>='a'&&str3[i]<='z'))){
			if(i<=9)
				printf("0");
			printf("%d",i);
			break;
		}
	}	
    return 0;
} 