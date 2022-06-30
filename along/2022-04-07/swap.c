#include<stdio.h>

void swap(double* a, double* b);

int main(void)
{
	double a = 10.4, b = 20.5;
	swap(&a, &b);
	printf("a : %.1lf, b: %.1lf", a, b);

	return 0;
}

void swap(double* a, double* b)
{
	double temp;
	temp = *a;
	*a = *b;
	*b = temp;

}