#include <stdio.h>

int main() {

	//경찰관이 범죄좌의 정보를 입수
	// 이름, 나이, 몸무게, 키, 범죄명

	char name[512];
	int age, weight;
	double height;
	
	printf("이름 : ");
	scanf_s("%s", name, sizeof(name));

	printf("나이 : ");
	scanf_s("%d", &age);

	printf("몸무게 : ");
	scanf_s("%d", &weight);

	printf("키 : ");
	scanf_s("%lf", &height);

	char what[256];
	printf("어떤 범죄 : ");
	scanf_s("%s", what, sizeof(what));

	printf("\n\n===범죄자 정보===\n\n");

	printf("이름 : %s\n", name);
	printf("나이 : %d\n", age);
	printf("몸무게 : %d\n", weight);
	printf("키 : %f\n", height);

	return 0;
}