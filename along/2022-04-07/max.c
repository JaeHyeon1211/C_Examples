#include<stdio.h>

double find_max(double* pa, int size);

int main(void)
{
	double max;
	double ary[] = { 3.4, 0.5, 1.7, 5.2, 2.0 };
	int size = sizeof(ary) / sizeof(ary[0]);
	max = find_max(ary, size);
	printf("배열의 최댓값 : %.1lf", max);
}

double find_max(double* pa, int size)
{	
	double max;
	max = pa[0];
	for (int i = 1; i < size; i++)
	{
		if (max < pa[i])
		{
			max = pa[i];
		}

	}
	return max;

}