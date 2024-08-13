#include <stdio.h>

// 선언
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
	printf("반환값 없는 함수");
}

int function2(int num) {
	return num + 5;
}