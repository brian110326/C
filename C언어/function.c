#include <stdio.h>

// ����
void function();
int function2(int num);

int main() {

	function();
	printf("\n");
	int number = function2(10);
	printf("%d\n", number);

	return 0;
}

void function() {
	printf("��ȯ�� ���� �Լ�");
}

int function2(int num) {
	return num + 5;
}