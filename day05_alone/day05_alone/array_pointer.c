#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main() {
	//배열 포인터 선언 및 사용
	int a[4] = { 1,2,3,4 };
	int i;
	int* b;
	//b = &a[0];
	b = a;//a의 주소를 b에 저장
	
	printf("==배열 a 출력==\n");
	for (i = 0; i < 4; i++) {
		printf("%2d", a[i]);
	}

	printf("\na[0]의 값 : %d\n", a[0]);
	printf("a[0]의 값 : %d\n", *b + 0);

	printf("==포인터 배열 b 출력==\n");
	for (i = 0; i < 4; i++) {
		printf("%2d", *(b + i));
	}
	return 0;
}