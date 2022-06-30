#include<stdio.h>

int prime_check(int n);
int main(void)
{
	int num;
	int pd;
	
	printf("양수입력 : ");
	scanf("%d", &num);

   prime_check(num);

   return 0;
	

}

int prime_check(int n)
{
	
	int i, j;
	int cnt = 0;
	
	for (i = 2; i <= n; i++)
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
			printf(" %5d", i);
			cnt++;
			if (cnt % 5 == 0)
			{
				printf("\n");
			}

		}
	}
}
