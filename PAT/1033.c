#include <stdio.h>
#include <ctype.h>
int main(){
    char c;
    int bad[128] = {0}; 
    while((c = getchar()) != '\n')      
        bad[toupper(c)] = 1;
    while((c = getchar()) != '\n')      
        if(!bad[toupper(c)] && !(isupper(c) && bad['+']))
              putchar(c);
    return 0;
}