#include <stdio.h>
int sum(int x, int y);

int main(void) {
	int a = 10, b = 20;
	int result;

	result = sum(a, b);  //=> result = sum(10, 20);  
	printf("result : %d\n", result);

	return 0;
}

//�Լ� ����κ��� ����� �Լ����Ǹ� �÷��� �����
int sum(int x, int y) {
	int tmp;
	tmp = x + y;

	return 0;
}