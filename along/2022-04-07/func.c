#include<stdio.h>

int rec_func(int n);

int main(void)
{
	int tot = 0;
	tot = rec_func(10);
	printf("10ÀÇ ÇÕ°è: %d", tot);

	return 0;
}
int rec_func(int n)
{
	if (n == 0)
		return 0;
	int sum = n + rec_func(n - 1);
	return sum;

}