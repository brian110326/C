#include <stdio.h>

int main() {

	//�������� �������� ������ �Լ�
	// �̸�, ����, ������, Ű, ���˸�

	char name[512];
	int age, weight;
	double height;
	
	printf("�̸� : ");
	scanf_s("%s", name, sizeof(name));

	printf("���� : ");
	scanf_s("%d", &age);

	printf("������ : ");
	scanf_s("%d", &weight);

	printf("Ű : ");
	scanf_s("%lf", &height);

	char what[256];
	printf("� ���� : ");
	scanf_s("%s", what, sizeof(what));

	printf("\n\n===������ ����===\n\n");

	printf("�̸� : %s\n", name);
	printf("���� : %d\n", age);
	printf("������ : %d\n", weight);
	printf("Ű : %f\n", height);

	return 0;
}