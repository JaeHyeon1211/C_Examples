#include <stdio.h>
#include <string.h>

//int main(void)
//{
//	char str1[80] = "strawberry";
//	char str2[80] = "apple";
//	char *ps1 = "banana";
//	char *ps2 = str2;
//
//	printf("최초 문자열: %s\n", str1);
//	strcpy(str1, str2);
//	printf("바뀐 문자열 : %s\n", str1);
//
//	strcpy(str1, ps1);
//	printf("바뀐 문자열 : %s\n", str1);
//
//	strcpy(str1, ps2);
//	printf("바뀐 문자열 : %s\n", str1);
//
//	strcpy(str1, "banana");
//	printf("바뀐 문자열 : %s\n", str1);
//
//	printf("최총 str1 : %s\n", str1);
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

	printf("바꾸기전문자열 : %s \n", str);
	my_strcpy(str, "apple");
	printf("바꾼 후 문자열 : %s\n", str);
	printf("다른 문자열 대입 : %s\n", my_strcpy(str, "kiwi"));

	return 0;
}


//int main(void)
//{
//	char str1[80], str2[80];
//	char* resp;
//
//	printf("2개의 과일 이름 입력 : ");
//	scanf("%s%s", str1, str2);
//
//	if (strlen(str1) > strlen(str2))
//		resp = str1;
//	else
//		resp = str2;
//	printf("이름이 긴 과일은 : %s\n", resp);
//	return 0;
//
//}

//int main(void)
//{
//	char str1[80] = "pear";
//	char str2[80] = "peach";
//
//	printf("사전에 나중에 나오는 과일 이름은 : ");
//
//	if (strcmp(str1, str2) > 0)
//		printf("%s\n", str1);
//	else
//		printf("%s\n", str2);
//
//	return 0;
//}

