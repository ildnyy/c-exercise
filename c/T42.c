#include <stdio.h>
#include <string.h>

int main(void){
	int m, count, f1, f2, f3, f4, len, i;
	char s[256], t4[]="~!@#$%^", *p;
	scanf("%d", &m);
	while(m--) {        
		scanf("%s", s);         
		count = 0;
		f1 = f2 = f3 = f4 = 0;
		len = strlen(s);
		if(8 <= len && len <= 16) {            
			for(i=0; i<len; i++) {
				if('A' <= s[i] && s[i] <= 'Z') 
					f1 = 1;
				if('a' <= s[i] && s[i] <= 'z')  
					f2 = 1;
				if('0' <= s[i] && s[i] <= '9')  
					f3 = 1;
				p = t4;                        
				while(*p) {
					if(s[i] == *p) {
						f4 = 1;
						break;
					}
					p++;
				}
				count = f1 + f2 + f3 + f4;
				if(count >= 3)
					break;
			}
		}      
		if(count >= 3)
			printf("YES\n");
		else
			printf("NO\n");
	}
	return 0;
}

