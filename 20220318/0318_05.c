#include < Stdio.h>

int main()
{
	char data = 0;
	int grade;
	char name[20];
	
	printf("1번입력 : ");
	scanf("%c", &data);
	//문자를 할때에는 1비트씩 읽기때문에 엔터값도 아스키코드값으로 읽어버림
	printf("학점 입력 : ");
	scanf("%d", &grade);
	printf("이름 입력 : ");
	scanf("%s", name);
	//문자열로 가져와서 엔터값이 안들어갈꺼라는 추측

	printf("%s의 학점은 %c입니다.", name, grade);

	return 0;

}