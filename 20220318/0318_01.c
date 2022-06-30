#include <stdio.h>

int main()

{
	char fruit[20] = "strawberry";//배열의 크기수정불가능 

	char* ptr = fruit;


	printf("딸기 : %s\n", fruit); //배열명은 주소
	printf("딸기쨈 : %s %s\n", fruit, "jam");
	printf("좋아하는 과일 : %s\n", ptr); //포인트변수도 주소

	return 0;

}