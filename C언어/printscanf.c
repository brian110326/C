#include <stdio.h>

int main() {
	int age = 12;
	printf("%d\n", age);
	age = 13;
	printf("%d\n", age);
	

	//�Ǽ��� ������ ���� ����
	float f = 45.2f;
	printf("%.2f\n", f);

	double d = 24.3;
	printf("%f\n", d);

	int year = 1998;
	printf("�¾ �⵵ : %d��\n", year);
	const int YEAR = 2000;

	//printf
	int add = 4 + 45;
	printf("%d\n",add);
	printf("%d * %d = %d\n", 4, 5, 4 * 5);

	/*int input;
	printf("�Է°� : ");
	scanf_s("%d", &input);
	printf("�Է°� : %d\n", input);*/

	/*int one, two, three;
	printf("3�� ���� �Է� : ");
	scanf_s("%d %d %d", &one, &two, &three);
	printf("%d %d %d", one, two, three);*/

	char c = 'A';
	printf("%c\n", c);

	char str[256];
	scanf_s("%s", str, sizeof(str));
	printf("%s\n", str);

	return 0;
}