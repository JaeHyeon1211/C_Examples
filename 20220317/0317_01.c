#include <stdio.h>

//int main(void)
//{
//	int data = 10 + 20; //지역변수는 괄호안에서만 선언할수있음
//
//	printf("%d", data);  
//
//	return 0;
//
//}

//int main()
//{
//	printf("Be happy\n");
//	printf("12345678901234567890\n");
//	printf("My\tfriend\n");
//	printf("Goot\bd\tchance\n");
//	printf("Cow\rW\a\n");
//
//	return 0;
//
//}


//int main()
//{
//	printf("%c\n", 'A');
//	printf("%s\n", "A");
//	printf("%c은 %s입니다.\n", '1', "first");
//	//%c는 문자열이기때문에 주소가 필요
//
//	return 0;
//
//}

//int main()
//{
//	int a;
//	int b = 20;
//	int c;
//
//	a = 10;
//	printf("a:%d\n", a);
//	printf("b:%d\n", b);
//	printf("c:%d\n", c);
//
//	return 0;
//}

int main()
{
	unsigned int a;

	a = 4294967295;
	printf("%d\n", a);
	a = -2;
	printf("%u\n", a);


	return 0;

}