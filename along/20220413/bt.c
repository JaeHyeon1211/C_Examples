#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

int main(void)
{
	int i = 0;
	char s1[30] = "cds#state#temp";
	char* ary[4] = { 0 };
	char* ptr = strtok(s1, "#");

	while (ptr != NULL)
	{	
		
		printf("%s\n", ptr);
		ary[i] = ptr;
		ptr = strtok(NULL, "#");
		i++;
	}
	for (i = 0; i < 3; i++)
	{
		printf("%s\n", ary[i]);
	}
	
}