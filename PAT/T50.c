#include <stdio.h>
#include <math.h>

#define LEN 1002

int isUnique(int arr[][LEN], int x, int y, int TOL) {
	if (abs(arr[y][x] - arr[y - 1][x - 1]) <= TOL
		|| abs(arr[y][x] - arr[y][x - 1]) <= TOL
		|| abs(arr[y][x] - arr[y + 1][x - 1]) <= TOL
		|| abs(arr[y][x] - arr[y - 1][x]) <= TOL
		|| abs(arr[y][x] - arr[y - 1][x + 1]) <= TOL
		|| abs(arr[y][x] - arr[y][x + 1]) <= TOL
		|| abs(arr[y][x] - arr[y + 1][x + 1]) <= TOL
		|| abs(arr[y][x] - arr[y + 1][x]) <= TOL) {
		return 0;
	}
	return 1;
}
int arr[LEN][LEN] = { 0 };
int pixel[2 << 24] = { 0 };
int main() {
	int M, N, TOL, cnt = 0;
	scanf("%d %d %d", &M, &N, &TOL);
	for (int i = 1; i <= N; i++) {
		for (int j = 1; j <= M; j++) {
			scanf("%d", &arr[i][j]);
			pixel[arr[i][j]]++;
		}
	}
	int x, y, color;
	for (int i = 1; i <= N; i++) {
		for (int j = 1; j <= M; j++) {
			if (pixel[arr[i][j]] == 1) {
				if (isUnique(arr, j, i, TOL)) {
					cnt++;
					x = j;
					y = i;
					color = arr[i][j];
					if (cnt == 2) {
						break;
					}
				}
			}
		}
		if (cnt == 2) {
			break;
		}
	}
	if (cnt == 2) {
		printf("Not Unique\n");
	}
	else if (cnt == 0) {
		printf("Not Exist\n");
	}
	else {
		printf("(%d, %d): %d", x, y, color);
	}
	return 0;
}
