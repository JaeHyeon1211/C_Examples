#include <stdio.h>
#include <string.h>

//int main(void)
//{
//	char str1[80] = "strawberry";
//	char str2[80] = "apple";
//	char *ps1 = "banana";
//	char *ps2 = str2;
//
//	printf("���� ���ڿ�: %s\n", str1);
//	strcpy(str1, str2);
//	printf("�ٲ� ���ڿ� : %s\n", str1);
//
//	strcpy(str1, ps1);
//	printf("�ٲ� ���ڿ� : %s\n", str1);
//
//	strcpy(str1, ps2);
//	printf("�ٲ� ���ڿ� : %s\n", str1);
//
//	strcpy(str1, "banana");
//	printf("�ٲ� ���ڿ� : %s\n", str1);
//
//	printf("���� str1 : %s\n", str1);
//
//	return 0;
//
//
//}

//char* my_strcpy(char* pd, char* ps)
//{
//	char* po = pd;
//
//	while (*ps != '\0')
//	{
//		*pd = *ps;
//		pd++;
//		ps++;
//	}
//	*pd = '\0';
//
//	return po;
//}

char* my_strcpy(char* pd, char* ps)
{
	char* po = pd;

	while ((*pd++ = *ps++) != '\0')
		*pd = '\0';

	return po;
}

int main(void)
{
	char str[80] = "strawberry";

	printf("�ٲٱ������ڿ� : %s \n", str);
	my_strcpy(str, "apple");
	printf("�ٲ� �� ���ڿ� : %s\n", str);
	printf("�ٸ� ���ڿ� ���� : %s\n", my_strcpy(str, "kiwi"));

	return 0;
}


//int main(void)
//{
//	char str1[80], str2[80];
//	char* resp;
//
//	printf("2���� ���� �̸� �Է� : ");
//	scanf("%s%s", str1, str2);
//
//	if (strlen(str1) > strlen(str2))
//		resp = str1;
//	else
//		resp = str2;
//	printf("�̸��� �� ������ : %s\n", resp);
//	return 0;
//
//}

//int main(void)
//{
//	char str1[80] = "pear";
//	char str2[80] = "peach";
//
//	printf("������ ���߿� ������ ���� �̸��� : ");
//
//	if (strcmp(str1, str2) > 0)
//		printf("%s\n", str1);
//	else
//		printf("%s\n", str2);
//
//	return 0;
//}

