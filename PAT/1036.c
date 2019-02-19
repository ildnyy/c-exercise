#include <stdio.h>

int main(){
    int n;
    char c;
    scanf("%d %c", &n, &c);
    for(int i = 0; i < n; ++i){
        printf("%c", c);
    }
    printf("%c", '\n');
    for(int i = 0; i < (n % 2 == 0 ? n / 2 : (n + 1) / 2) - 2; ++i){
        printf("%c", c);
        for(int j = 0; j < n - 2; ++j){
            printf("%c", ' ');
        }
        printf("%c\n", c);
    }
    for(int i = 0; i < n; ++i){
        printf("%c", c);
    }
    printf("%c", '\n');
    return 0;
}