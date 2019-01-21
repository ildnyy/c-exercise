#include <stdio.h>
int main(){
	int a[100],temp,i,j,n,m;
	scanf("%d %d",&n,&m);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);	
	for(i=0;i<m;i++){
		temp=a[n-1];
		for(j=n-1;j>0;j--){
			a[j]=a[j-1];
		}
		a[0]=temp;
	}
	for(i=0;i<n;i++){
		printf("%d",a[i]);
	  if(i<n-1)printf(" ");
	}
	return 0;
}