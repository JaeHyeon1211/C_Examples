#include <stdio.h>

int main()

{
	char fruit[20] = "strawberry";//�迭�� ũ������Ұ��� 

	char* ptr = fruit;


	printf("���� : %s\n", fruit); //�迭���� �ּ�
	printf("����´ : %s %s\n", fruit, "jam");
	printf("�����ϴ� ���� : %s\n", ptr); //����Ʈ������ �ּ�

	return 0;

}