#include<stdio.h>
//int main(void)
//{
//	int i, j, k;
//
//	for (i = 0; i <5; i++)
//	{
//		for (j = 4; j > i; j--)
//		{
//			printf(" ");
//		}
//		for (k = 0; k <2*i+1; k++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//}




//int main(void)
//{
//	int i, j;
//
//	for (i = 0; i < 5; i++) 
//	{
//		for (j = 0; j <5-i; j++)
//		{
//			printf(" ");
//		}
//		for (j = 0; j <= i; j++)
//		{
//			printf("*");
//		}
//
//		printf("\n");
//	}
//}



int main(void)
{
	int i, j;
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j <5; j++)
		{
			if ((i == j) || (i + j == 4))
			{
				printf("*");
			}
			else
				printf(" ");
		}

		printf("\n");
	}
}
