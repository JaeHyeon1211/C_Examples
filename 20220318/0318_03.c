#include <stdio.h>
int main()

{
	int income = 0;
	double tax;
	const double tax_rate = 0.12; //const�� ����ϸ� �ʱ�ȭ�� ���� �ٲܼ� ����.
			  //->������ ���
	 //tax_rate = 0.15; const�� �����߱⶧���� �����Ҽ� ����

	income = 456;
	tax = income * tax_rate;
	printf("������ : %.1lf�Դϴ�.\n", tax);

	return 0;

}
/* �����ͷ� const�� ���� ���
int main()

{
	const int income = 0;
	double tax;
	const double tax_rate = 0.12; 
	
	int* ptr = &income;

	*ptr = 10; //�����ͷ� �ּҰ����� �����ָ� const�� ���� ���������� ���� ���� ��������


	tax = income * tax_rate;
	printf("������ : %.1lf�Դϴ�.\n", tax);

	return 0;

}
*/
