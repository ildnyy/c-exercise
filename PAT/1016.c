 #include <stdio.h>
 #include <stdlib.h>
 #include <math.h>  
 int number(int a, int b);
int newNum(int num, int repeatTime);
int main(){     int a,b, la, lb;
scanf("%d%d%d%d", &la,&a,&lb,&b);
     int a1 = number(la,a);
     int b1 = number(lb, b);
     int new_a = newNum(a, a1);
     int new_b = newNum(b,b1);
     printf("%d",new_a +new_b);
     return 0;
 }
 
 int number(int a, int b){
     int cnt = 0;
     while( a != 0){
         if(a % 10 == b) cnt++;
         a /= 10;
     }
     if ( a == b) cnt ++;
      return cnt;
 }
 
 int newNum(int num, int repeatTime){
     int result = 0,i = 0;
     for(; i < repeatTime; i++){
         result += num * (pow(10,i));
     }

     return result;
 }