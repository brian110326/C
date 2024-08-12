#include <stdio.h>

int main() {

	for (int i = 0; i < 10; i++)
	{
		printf("hello\n");
	}

	int b = 3;
	int a = 5;
	if (a > b) {
		printf("%d\n", a);
	}

	int i = 1;
	while (i < 10) {
		printf("%d\n",i);
		i++;
	}

	int j = 1;
	do {
		printf("hello\n");
		j++;
	} while (j<5);

	for (int i = 2; i <= 9; i++) {
		for (int j = 1; j <= 9; j++) {
			printf("%d X %d = %d\n",i,j,i*j);
		}
		printf("\n");
	}

	for (int i = 1; i <= 5; i++) {
		for (int j = 1; j <= i; j++) {
			printf("*");
		}
		printf("\n");
	}
	printf("\n");

	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5-i; j++) {
			printf(" ");
			
		}
		
		for (int k = 0; k < i*2+1; k++) {
			printf("*");
		}

		
		printf("\n");
	}
	printf("\n");



	return 0;
}