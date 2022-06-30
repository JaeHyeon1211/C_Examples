#include<stdio.h>

//int main(void)
//{
//	int a = 10;
//	int* pi;
//	int** ppi;
//
//	pi = &a;
//	ppi = &pi;
//
//	printf("----------------------------------------------\n");
//	printf("변수      변숫값      &연산     *연산     **연산\n");
//	printf("----------------------------------------------\n");
//	printf("a%13d%14u\n", a, &a);
//	printf("pi%14u%12u%8d\n", pi, &pi, *pi);
//	printf("ppi%13u%12u%11u%8u\n", ppi, &ppi, *ppi,**ppi);
//	printf("----------------------------------------------\n");
//}

//void swap_ptr(char** ppa, char** ppb);
//
//int main(void)
//{
//	char* pa = "success";
//	char* pb = "failure";
//
//	printf("pa -> %s, pb -> %s\n", pa, pb);
//	swap_ptr(&pa, &pb);
//	printf("pa -> %s, pb -> %s\n", pa, pb);
//
//	return 0;
//}
//
//void swap_ptr(char** ppa, char** ppb)
//{
//	char* pt;
//	pt = *ppa;
//	*ppa = *ppb;
//	*ppb = pt;
//}

//void print_ary(char** pps, int cnt);
//int main(void)
//{
//	char* ptr_ary[] = {"eagel","tiger","lion","sqirrel" };
//	int count;
//
//	count = sizeof(ptr_ary) / sizeof(ptr_ary[0]);
//
//	print_ary(ptr_ary, count);
//
//	return 0;
//
//}
//void print_ary(char** pps, int cnt)
//{
//	int i;
//	for (i = 0; i < cnt; i++) {
//		printf("%s\n", pps[i]);
//	}
//}


//int sum(int, int);
//int main(void)
//{
//	int (*fp)(int, int);
//	int res;
//	fp = sum;
//	res = fp(10, 20);
//	printf("result : %d\n", res);
//
//	return 0;
//}
//int sum(int a, int b)
//{
//	return(a + b);
//}

int main(void)
{
	int a = 10;
	double b = 3.5;
	void* vp;

	vp = &a;
	printf("a : %d\n", *(int*)vp);

	vp = &b;
	printf("b : %.1lf\n", *(double*)vp);

	return 0;
}