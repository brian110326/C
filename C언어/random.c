#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main() {

	//srand(time(NULL)); //���� �ʱ�ȭ
	//int num = rand() % 10 + 1;

	//printf("%d", num);

	srand(time(NULL));

	int i = rand() % 3;
	switch (i)
	{
	case 0:
		printf("����\n");
		break;
	case 1:
		printf("����\n");
		break;
	case 2:
		printf("��\n");
		break;
	default:
		break;
	}

	return 0;
}