#include<stdio.h>
int main(void)
{
	int i ,j;
	int cnt = 0;
	int num = 100;
	printf("2이상의 정수를 입력하세요 : %d\n",num);

	for (i = 2; i <= num; i++)
	{
		int s = 1;
		for (j = 2; j < i; j++)
		{
			if (i % j == 0)
			{
				s = 0;
				break;
			}
		}
		if (s == 1)
		{
			printf("%5d", i);
			cnt++;
			if (cnt % 5 == 0)
			{
				printf("\n");
			}
		}
		
			
	}
	
}