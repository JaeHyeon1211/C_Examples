#include<stdio.h>

//int main(void)
//{
//	int score[3][4];
//	int total;
//	double avg;
//	int i, j;
//
//	for (i = 0; i < 3; i++)
//	{
//		printf("4������ ���� �Է� : ");
//		for (j = 0; j < 4; j++)
//		{
//			scanf("%d", &score[i][j]);
//		}
//	}
//	for (i = 0; i < 3; i++)
//	{
//		total = 0;
//		for (j = 0; j < 4; j++)
//		{
//			total += score[i][j];
//		}
//		avg = total / 4.0;
//		printf("���� : %d, ���: %.2lf\n", total, avg);
//	}
//	return 0;
//}

//int main(void)
//{
//	char animal[5][20];
//	int i;
//	int count;
//
//	count = sizeof(animal) / sizeof(animal[0]);
//	for (i = 0; i < count; i++)
//	{
//		scanf("%s", animal[i]);
//	}
//	for (i = 0; i < count; i++)
//	{
//		printf("%s ", animal[i]);
//	}
//	return;
//}

int main(void)
{
	char* pary[5];
	int i;

	pary[0] = "dog";
	pary[1] = "elephant";
	pary[2] = "horse";
	pary[3] = "tiger";
	pary[4] = "lion";

	for (i = 0; i < 5; i++)
	{
		printf("%s\n", pary[i]);
	}

	return 0;
}