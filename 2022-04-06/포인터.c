#include <stdio.h>
//int main(void) {
//	int a;
//	double b;
//	char c;
//
//	printf("int�� ������ �ּ� : %u\n", &a);
//	printf("double�� ������ �ּ� : %u\n", &b);
//	printf("char�� ������ �ּ�  : %u\n", &c);
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
//	printf("�� ������ ��  : %d, %d\n", *pa, *pb);
//	printf("�� ������ �� : %d\n", *pt);
//	printf("�� ������ ��� : %.1lf\n", *pg);
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
//	printf("���� a �� :  %d \n", *pa);
//	pa = &b;
//	printf("���� b �� :  %d \n", *pa);
//	pa = &a;
//	a = 20;
//	printf("���� a �� :  %d \n", *pa);
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
//	printf("char�� ������ �ּ� ũ�� : %d\n", sizeof(&ch));
//	printf("int�� ������ �ּ� ũ�� : %d\n", sizeof(&in));
//	printf("double�� ������ �ּ� ũ�� : %d\n", sizeof(&db));
//
//	printf("char * �������� ũ�� : %d\n", sizeof(pc));
//	printf("int * �������� ũ�� : %d\n", sizeof(pi));
//	printf("double * �������� ũ�� : %d\n", sizeof(pd));
//
//	printf("char * �����Ͱ� ����Ű�� ������ ũ�� : %d\n", sizeof(*pc));
//	printf("int * �����Ͱ� ����Ű�� ������ ũ�� : %d\n", sizeof(*pi));
//	printf("double * �����Ͱ� ����Ű�� ������ ũ�� : %d\n", sizeof(*pd));
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
	swap(&a, &b);//�����ϱ�����
	printf("a:%d, b:%d\n", a, b);

	return 0;
}
