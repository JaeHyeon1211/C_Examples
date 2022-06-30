#include<stdio.h>
int main(void)
{
	int a=0, b=0, sum =0;
	char op;
	printf("사칙연산 입력(정수) : ");
	scanf("%d%c%d",&a,&op,&b);

	switch (op)
	{

	case '-': sum = a - b;
		break;
	case '+': sum = a + b;
		break;
	case '/': sum = a / b;
		break;
	case '*': sum = a * b;
		break;
	}
	printf("%d%c%d=%d\n", a, op, b, sum);
	return 0;





}