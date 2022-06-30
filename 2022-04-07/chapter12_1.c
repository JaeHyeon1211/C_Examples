
#include <stdio.h>
/*
//int main(void) {
//	char str[80];
//
//	printf("문자열 입력 : ");
//	scanf("%s", str);
//	printf("첫번째 단어 : %s\n",str);
//	scanf("%s", str);
//	printf("버퍼에 남아 있는 두번째 단어 : %s\n", str);
//	
//	return 0;
//
//}

//int main(void) {
//	char str[80];
//
//	printf("공백이 포함된 문자열 입력 : ");
//	gets(str);
//	printf("입력한 문자열은 %s입니다.", str);
//
//	return 0;
//};
////
//


//void str_print(char m_str[]);
//
//int main(void) {
//	
//	char str[] = "test";
//	str_print(str);
//
//	return 0;
//  }
//
//void str_print(char m_str[]) {
//	int cnt = 0;
//	char s1[5] = { 0 };
//
//	while (m_str[cnt] != '\0')
//	{
//		s1[cnt] = m_str[cnt];
//		cnt++;
//	}
//	s1[cnt] = '\0';
//	printf("배열 문자열 변환 : %s\n", s1);
//}
*/


//void str_print(char *ps) {
//	int cnt = 0;
//	char s1[5] = { 0 };
//
//	while (*(ps+cnt) != '\0')
//	{
//		s1[cnt] = *(ps + cnt);
//		cnt++;
//	}
//	s1[cnt] = '\0';
//	printf("배열 문자열 변환 : %s\n", s1);
//}
//
//int main(void) {
//
//	char str[] = "test";
//	str_print(str);
//
//	return 0;
//}

void str_print(char* m_str, char *in_str) {
	int cnt = 0;

	while (*m_str != '\0')
	{
		*(in_str + cnt) = *m_str;
		m_str++;
		cnt++;
	}
	*(in_str + cnt) = '\0';
	printf("배열 문자열 변환 : %s\n", in_str);
}

int main(void) {
	
	char str[] = "test";
	char in_str[10];

	str_print(str, in_str);

	return 0;
}

