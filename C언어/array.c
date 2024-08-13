#include <stdio.h>

int main() {

	int array[] = { 10,20,30,40 };
	printf("%d\n", array[0]);

	for (int i = 0; i < sizeof(array)/sizeof(int); i++) {
		printf("%d\n", array[i]);
	}

	int arr[] = {1,2,3,4,5,6,7,8,9,10};
	char arr2[] = { 'a','b' };

	for (int i = 0; i < sizeof(arr2) / sizeof(char); i++) {
		printf("%c\n", arr2[i]);
	}

	// 문자, 문자열
	char c = 'A';
	char str[] = "coding";
	printf("%s\n", str);
	printf("%d\n", sizeof(str));

	char kor[] = "나노코딩";
	printf("%d\n", sizeof(kor)); //9
	// 영어 한글자 : 1byte
	// 한글 한글자 : 2byte

	return 0;
}