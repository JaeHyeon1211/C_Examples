
#include <stdio.h>
/*
//int main(void) {
//	char str[80];
//
//	printf("���ڿ� �Է� : ");
//	scanf("%s", str);
//	printf("ù��° �ܾ� : %s\n",str);
//	scanf("%s", str);
//	printf("���ۿ� ���� �ִ� �ι�° �ܾ� : %s\n", str);
//	
//	return 0;
//
//}

//int main(void) {
//	char str[80];
//
//	printf("������ ���Ե� ���ڿ� �Է� : ");
//	gets(str);
//	printf("�Է��� ���ڿ��� %s�Դϴ�.", str);
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
//	printf("�迭 ���ڿ� ��ȯ : %s\n", s1);
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
//	printf("�迭 ���ڿ� ��ȯ : %s\n", s1);
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
	printf("�迭 ���ڿ� ��ȯ : %s\n", in_str);
}

int main(void) {
	
	char str[] = "test";
	char in_str[10];

	str_print(str, in_str);

	return 0;
}

