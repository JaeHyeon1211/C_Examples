#include<stdio.h>


int main(void) {

	for (int i = 1; i < 4; i++) {

		for (int j = 1; j <7-2*i ; j++) {
			printf(" ");
		}
		for (int j = 1; j < 2 * i; j++)
		{
			printf("*");
		}

		printf("\n");
	}
	


}