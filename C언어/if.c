#include <stdio.h>

int main() {

	/*int age = 15;

	if (age >= 20) {
		printf("�Ϲ����Դϴ�\n");
	}
	else if(age >= 14 && age <= 16){
		printf("dlfkj");
	}
	else {
		printf("�л��Դϴ�\n");
	}*/

	for (int i = 6; i <= 10; i++) {
		if (i == 7) {
			
			continue;
		}
		printf("%d�� �л��� ��ǥ �غ� �ϼ���\n",i);
	}

	return 0;
}