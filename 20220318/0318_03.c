#include <stdio.h>
int main()

{
	int income = 0;
	double tax;
	const double tax_rate = 0.12; //const를 사용하면 초기화된 값을 바꿀수 없다.
			  //->고정된 상수
	 //tax_rate = 0.15; const로 고정했기때문에 변경할수 없음

	income = 456;
	tax = income * tax_rate;
	printf("세금은 : %.1lf입니다.\n", tax);

	return 0;

}
/* 포인터로 const값 변경 방법
int main()

{
	const int income = 0;
	double tax;
	const double tax_rate = 0.12; 
	
	int* ptr = &income;

	*ptr = 10; //포인터로 주소값으로 보내주면 const로 값을 지정했지만 값이 변경 가능해짐


	tax = income * tax_rate;
	printf("세금은 : %.1lf입니다.\n", tax);

	return 0;

}
*/
