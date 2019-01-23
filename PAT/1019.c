#include <stdio.h>
#include <stdlib.h>

int cmp(const void *a, const void *b) { 
    return *(int *)a < *(int *)b; 
}
int main() {
    int N;
    scanf("%d", &N);
    while (N != 0) { 
        int arr[4] = {0}, i = 0, max, min; 
        while (N > 0) { 
            arr[i++] = N % 10;
            N /= 10;
        } 
        qsort(arr, 4, sizeof(int), cmp);
        max = arr[0] * 1000 + arr[1] * 100 + arr[2] * 10 + arr[3];
        min = arr[0] + arr[1] * 10 + arr[2] * 100 + arr[3] * 1000;
        N = max - min;
        if (N == 0) {
            printf("%04d - %04d = 0000\n", max, min);
        } else {
            printf("%04d - %04d = %04d\n", max, min, N);
            if (N == 6174) {  
                break;
            }
        }
    } 
    return 0; 
}