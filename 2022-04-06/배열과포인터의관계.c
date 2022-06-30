#include <stdio.h>

//int main(void) {
//	int ary[3];
//	int i;
//	
//	//*(ary + 0) = 10;
//	ary[0] = 10;
//
//	//*(ary + 1) = *(ary + 0) + 10;
//	ary[1] = ary[0] + 10;
//
//	printf("세번째 배열 요소에 키보드 입력: ");
//	//scanf_s("%d", ary + 2);
//	//scanf_s("%d", &ary[2]);
//
//	for (i= 0; i < 3; i++) {
//		//printf("%5d", *(ary + i));
//		printf("%5d", ary[i]);
//	}
//	return 0;
//
//
//}

int main(void) {
	int ary[3] = { 10,20,30 };
	int* pa = ary;
	int i;

	printf("배열의 값 : ");
	
	for (i = 0; i < 3; i++) {
		printf("%d ", *pa);
		pa++;
		/*printf("%d ", ary[i]);
		ary++;*/ //배열명은 상수이기때문에

	}
	return 0;
}