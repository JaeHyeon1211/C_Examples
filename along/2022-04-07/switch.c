#include<stdio.h>
int main(void) {
	int n1=0, n2=0 ;
	char op;
	int sum=0;
	printf("��Ģ������ ������ �Է��Ͻÿ� : ");
	scanf("%d%c%d", &n1, &op, &n2);

	switch (op)
	{
	case '+': sum = n1 + n2;
		break;
	case '-': sum = n1 - n2;
		break;
	case'/': sum = n1 / n2;
		break;
	case'*':sum = n1 * n2;
		break;
	}
	printf("%d %c %d = %d", n1, op, n2, sum);
}