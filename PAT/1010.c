#include<stdio.h>
int main(){
  int iNum[1000];
  int i=-1;
  do{
    i++;
    scanf("%d",&iNum[i]);
  }while(!iNum[i]==0);
  if(iNum[0]==0||iNum[1]==0){
    printf("0 0");
  }
  else{
    for(int j=1;j<=i-1;j=j+2){
      printf("%d %d",iNum[j-1]*iNum[j],iNum[j]-1);
      if(j<i-2){
        printf(" ");
      }
    }
  }
  return 0;
}
