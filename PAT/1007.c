#include <stdio.h>
#include <math.h>
#define MAXN 100000
int isPrime ( int n ) {
	int i,m=1;
	if ( n <= 1 )	m=0;
	else {
	  int cont=0;
		for ( i = 2; i <= n; i++ )
			if ( n % i == 0 )	cont++; 
		if(cont==1) m=1;
		else m=0;
	}
	return m;
}
int main() {
	int N, i, count;
	int a[MAXN] = {0};
	scanf("%d", &N);
	int k = 0;
	for ( i = 2; i <= N; i++ ) 
		if ( isPrime(i) )	a[k++] = i;
	count = 0;
	for ( i = 0; i < k; i++ )
		if ( a[i+1] - a[i] == 2 )	count++;
	printf("%d\n", count);
	
	return 0;
}