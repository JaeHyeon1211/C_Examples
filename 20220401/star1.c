#include <stdio.h>
int main(void)
{
	int i, j = 0;

	int k = 1;
	for (i = 0; i < 5; i++) {
		for (j = 5; j > k; j--) {
			printf(" ");
		} // j=2 k=2 
		for (j; j >0 ; j--) {
			printf("*");
		}
		k++;
		printf("\n");
	}

}