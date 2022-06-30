#include<stdio.h>
void print_ary(int* pq, int size);

int main(void)
{
	int ary[] = {10,20,30,40,50,60};
	//int size = sizeof(ary) / sizeof(ary[0]);
	int size = sizeof(ary) / sizeof(int);
	print_ary(ary, size);

	return 0;
}

void print_ary(int* pa, int size)
{
	for (int i = 0; i < size; i++)
	{
		
		/*printf("%d ", *pa);
		pa++;*/
		printf("%d ", pa[i]);
	}
}