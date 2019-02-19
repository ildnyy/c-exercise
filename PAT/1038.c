#include <stdio.h>

int main() {
    int N, K, grades[101] = {0}, score;
    scanf("%d", &N);
    for (int i = 0; i < N; i++) {
        scanf("%d", &score);
        grades[score]++;
    }
    scanf("%d", &K);
    for (int i = 0; i < K; i++) {
        scanf("%d", &score);
        if (i != 0) {
            printf(" ");
        }
        printf("%d", grades[score]);
    }
    return 0;
}