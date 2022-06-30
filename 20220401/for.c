#include <stdio.h>

int main(void)
{
	//int a=1;
	int i;

	for (i = 0; i <= 3; i++) {
		static int a = 2;
		a = a * 2;
	}
	printf("a : %d\n", a);

}