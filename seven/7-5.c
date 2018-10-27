#include <stdio.h>

unsigned set_n(unsigned x, int pos,int n){
	for(int i=pos;i<pos+n;i++)
		x |= 1 << i;
	return x;
}

unsigned reset_n(unsigned x, int pos,int n){
	for(int i=pos;i<pos+n;i++)
		x &= ~(1 << i);
	return x;
}

unsigned inverse_n(unsigned x, int pos,int n){
	for(int i=pos;i<pos+n;i++)
		x ^= 1 << i;
	return x;
}

int main(void){
	unsigned i, pos,n;

	printf("请输入整数及位数和n：\n");
	scanf_s("%u %u %u",&i ,&pos,&n);
	printf("将第%d位到%d位设为1后的值%d\n",pos,pos+n-1,set_n(i, pos,n));
	printf("从第%d位后%d位设为0后的值%d\n",pos, n, reset_n(i, pos,n));
	printf("将第%d位后%d取反后的值%d",pos,n,inverse_n(i, pos,n));

	return 0;
} 
