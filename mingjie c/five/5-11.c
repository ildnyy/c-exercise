#include <stdio.h>

#define STU	6

int main(void)
{
	int i, j;				
	int tensu[STU][2] = { {91,63},{78,67} ,{72,46},{89,34},{53,32},{54,34} };
	int sum_yw=0, sum_sx=0;

	for (i = 0; i < STU; i++) {
		for (j = 0;j < 1;j++)
			sum_yw += tensu[i][j];
		for (i = 0; i < STU; i++) 
			for (j = 1;j = 1;j++)
				sum_sx += tensu[i][j];
	}printf("语文总分：%d，语文平均分%d\n", sum_yw, sum_yw / STU);
     printf("数学总分：%d，数学平均分%d\n", sum_sx, sum_sx / STU);

	for (i = 0; j < STU;i++)			
		printf("学生%d的总分是：%d,平均分是：%d\n",i+1,tensu[i][0]+tensu[i][1], (tensu[i][0] + tensu[i][1])/2);
	
	return 0;
}