#include < Stdio.h>

int main()
{
	char data = 0;
	int grade;
	char name[20];
	
	printf("1���Է� : ");
	scanf("%c", &data);
	//���ڸ� �Ҷ����� 1��Ʈ�� �б⶧���� ���Ͱ��� �ƽ�Ű�ڵ尪���� �о����
	printf("���� �Է� : ");
	scanf("%d", &grade);
	printf("�̸� �Է� : ");
	scanf("%s", name);
	//���ڿ��� �����ͼ� ���Ͱ��� �ȵ������ ����

	printf("%s�� ������ %c�Դϴ�.", name, grade);

	return 0;

}