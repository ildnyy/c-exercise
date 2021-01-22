#include <stdio.h>
int main(){
	int max_school, school, score, i, n, max = 0, a[100001] = { 0 };
	scanf("%d", &n);
	for (i = 0;i < n;i++){
		scanf("%d %d", &school, &score);
		a[school] += score;
		if (a[school] >= max){
			max = a[school];
			max_school = school;
		}
	}
	printf("%d %d", max_school, max);
	return 0;
}

