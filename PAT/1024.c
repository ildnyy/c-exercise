#include<stdio.h> 
#include<string.h>
int main(){   
    char E[10000];
    scanf("%s",E);
    int n = strlen(E);
    if(E[0] == '-') printf("-");
    int pos = 0;
    while(E[pos] != 'E') {
        pos++;
    } 
    int exp = 0;
    for(int i = pos+2;i<n;i++) {
        exp = exp*10+(E[i]-'0');
    } 
    if(exp == 0) {
        for(int i = 1;i<pos; i++) {
            printf("%c",E[i]);
        } 
    }
    if(E[pos+1] == '-') {
        printf("0.");
        for(int i= 0;i < exp-1; i++) {
            printf("0");
        }
        printf("%c",E[1]) ;
        for(int i = 3;i < pos; i++) {
            printf("%c",E[i]);
        }
    } 
    else{
        for(int i = 1;i < pos; i++) {
            if(E[i] == '.') continue;
            printf("%c",E[i]);
            if(i == exp+2 && pos-3 != exp ) {
                printf("."); 
            }
        } 
        for(int i = 0;i < exp-(pos-3);i++) {
            printf("0");
        }
    }
    return 0;
 } 