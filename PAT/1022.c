#include <stdio.h>
int main() {
    int A, B, D, sum;
    scanf("%d %d %d", &A, &B, &D);
    sum = A + B;
    int num[100] = {0}, index = 0;
    do {
        num[index++] = sum % D;
        sum /= D;
    } while (sum != 0);
    for (int i = index - 1; i >= 0; i--){
        printf("%d", num[i]);
    }
    return 0;
}