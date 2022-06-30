#include <stdio.h>

int main()
{
	int a = 5, b = 5;
	int pre, post;

	printf("증가전 a = %d, b = %d\n", a, b);

	pre = (++a) * 3;
	post = (b++) * 3;

	printf("초깃값 a = %d, b = %d\n", a, b);
	printf("전위형: (++a) * 3 = %d, 후위형: (b++) * 3 = %d\n", pre, post);


	return 0;

}	