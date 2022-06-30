#include <stdio.h>
int sum(int x, int y);

int main(void) {
	int a = 10, b = 20;
	int result;

	result = sum(a, b);  //=> result = sum(10, 20);  
	printf("result : %d\n", result);

	return 0;
}

//함수 선언부분을 지우고 함수정의를 올려도 실행됨
int sum(int x, int y) {
	int tmp;
	tmp = x + y;

	return 0;
}