#include <stdio.h>

int main() {

	/*int age = 15;

	if (age >= 20) {
		printf("일반인입니다\n");
	}
	else if(age >= 14 && age <= 16){
		printf("dlfkj");
	}
	else {
		printf("학생입니다\n");
	}*/

	for (int i = 6; i <= 10; i++) {
		if (i == 7) {
			
			continue;
		}
		printf("%d번 학생은 발표 준비를 하세요\n",i);
	}

	return 0;
}