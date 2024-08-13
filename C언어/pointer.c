#include <stdio.h>

int main() {

	// pointer
	int num = 1;
	//printf("주소 : %d, 실제값 : %d\n", &num, num);

	int* pointer; // 포인터 변수
	pointer = &num;
	printf("방문 주소 : %d\n", *pointer);

	int arr[] = { 1,2,3,4,5,6,7,8,9 };
	int* p = &arr;
	printf("%d\n", *(p+3));

	/*int* s = pointer;
	*s *= 3;
	printf("%d\n",num);*/

	return 0;
}
