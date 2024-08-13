#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main() {

	//srand(time(NULL)); //난수 초기화
	//int num = rand() % 10 + 1;

	//printf("%d", num);

	srand(time(NULL));

	int i = rand() % 3;
	switch (i)
	{
	case 0:
		printf("가위\n");
		break;
	case 1:
		printf("바위\n");
		break;
	case 2:
		printf("보\n");
		break;
	default:
		break;
	}

	return 0;
}