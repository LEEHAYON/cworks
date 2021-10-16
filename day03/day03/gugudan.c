#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS


int main() {
	//구구단 1단 출력하기
	/*
	int dan;
	int i;
	printf("단을 입력하세요 : ");
	scanf_s("%d", &dan);

	for (i = 1; i < 10; i++) {
		printf("%d x %d = %d\n", dan, i, (dan * i));
	}
	*/
	//전체 구구단 출력하기
	int dan;
	int i;

		for (dan = 2; dan < 10; dan++) {
			for (i = 1; i < 10; i++) {
				printf("%d x %d = %d\n", dan, i, (dan * i));
			}
			printf("\n");
		}
	
	return 0;
}