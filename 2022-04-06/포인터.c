#include <stdio.h>
//int main(void) {
//	int a;
//	double b;
//	char c;
//
//	printf("int형 변수의 주소 : %u\n", &a);
//	printf("double형 변수의 주소 : %u\n", &b);
//	printf("char형 변수으 주소  : %u\n", &c);
//
//	return 0;
//
//}
//int main(void) {
//	int a = 10, b = 15, total;
//	double avg;
//	int* pa, * pb;
//	int* pt = &total;
//	double* pg = &avg;
//
//	pa = &a;
//	pb = &b;
//
//	*pt = *pa + *pb;
//	*pg = *pt / 2.0;
//
//	printf("두 정수의 값  : %d, %d\n", *pa, *pb);
//	printf("두 정수의 값 : %d\n", *pt);
//	printf("두 정수의 평균 : %.1lf\n", *pg);
//
//	return 0;
//
//}

//int main(void) {
//	int a = 10, b = 20;
//
//	const int *pa = &a;
//	//int * const pa = &a;
//
//	//*pa = 30;
//	printf("변수 a 값 :  %d \n", *pa);
//	pa = &b;
//	printf("변수 b 값 :  %d \n", *pa);
//	pa = &a;
//	a = 20;
//	printf("변수 a 값 :  %d \n", *pa);
//
//	return 0;
//
//}

//int main(void)
//{
//	char ch;
//	int in;
//	double db;
//	
//	char* pc = &ch;
//	int* pi = &in;
//	double* pd = &db;
//
//	printf("char형 변수의 주소 크기 : %d\n", sizeof(&ch));
//	printf("int형 변수의 주소 크기 : %d\n", sizeof(&in));
//	printf("double형 변수의 주소 크기 : %d\n", sizeof(&db));
//
//	printf("char * 포인터의 크기 : %d\n", sizeof(pc));
//	printf("int * 포인터의 크기 : %d\n", sizeof(pi));
//	printf("double * 포인터의 크기 : %d\n", sizeof(pd));
//
//	printf("char * 포인터가 가르키는 변수의 크기 : %d\n", sizeof(*pc));
//	printf("int * 포인터가 가리키는 변수의 크기 : %d\n", sizeof(*pi));
//	printf("double * 포인터가 가르키는 변수의 크기 : %d\n", sizeof(*pd));
//}

void swap(int* x, int* y)
{
	int temp;
	temp = *x;//= a = 10
	*x = *y;  //= b = 20
	*y = temp;

	printf("%d\n", temp);

}

int main(void)
{
	int a = 10, b = 20;
	swap(&a, &b);//저장하기위해
	printf("a:%d, b:%d\n", a, b);

	return 0;
}
