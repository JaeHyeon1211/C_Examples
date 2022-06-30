#include<stdio.h>
void fruit(void);

int main(void) {
	fruit(1);
	return 0;
}
void fruit(int cout) {
	printf("apple\n");
	if (cout == 3)return;
	fruit(cout + 1);
	printf("jam\n");
}