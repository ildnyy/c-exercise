#include<stdio.h>
typedef struct node{
  int address;
  int data;
  int next;
}Node;

int main(){
  int f_address, amount, back,count = 0;
  scanf("%d %d %d", &f_address, &amount, &back);
  Node a[amount];
  for(int i = 0; i < amount; i++){
    scanf("%d %d %d", &a[i].address, &a[i].data, &a[i].next);
  }
  for(int i = 0; i < amount; i++){
    for(int j = i; j < amount; j++){
      if(a[j].address == (i?a[i-1].next:f_address)){
        Node c;
        c = a[i];
        a[i] = a[j];
        a[j] = c;
        break;
      }
    }
    if(a[i].next == -1){
      amount = i + 1;
    }
  }
  int m = 0, n = 0;
  for(int i = 0; i < amount / back; i++){
    for(int j = 0; j < back / 2; j++){
      Node c;
      m = back * i + j; 
      n = back * (i + 1) - j - 1;
      c = a[m];
      a[m] = a[n];
      a[n] = c;
    }
  }
  for(int i = 0; i < amount - 1; i++){
    printf("%05d %d %05d\n", a[i].address, a[i].data, a[i + 1].address);
  }
  printf("%05d %d -1\n", a[amount - 1].address, a[amount - 1].data);
  return 0;
}