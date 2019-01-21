#include<stdio.h>
#include<string.h>
int main(){
  char str[81];
  int i=0;
  gets(str);
  for(i=strlen(str)-1;i>=0;i--){
    if(str[i]==' '){
       printf("%s",&str[i+1]);
       printf("%c",str[i]);
       str[i]='\0';
    }
    if(i==0)
       printf("%s",&str[i]);
  }
  return 0;
}