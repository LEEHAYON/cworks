#include <stdio.h>
#include <stdlib.h>
#define _CRT_SECURE_NO_WARNINGS

int main() {
	int num1 = 11;
	int* numPtr1; //스택영역에 위치_포인터
	int* numPtr2; //힙(heap) 영역에 위치

	numPtr1 = &num1;
	//numPtr2 = malloc(4);//4바이트
	numPtr2 =(int*) malloc(sizeof(int));//4바이트
	if (numPtr2 == NULL) { //에러 처리(필수)
		printf("동적 메모리 할당에 실패했습니다.\n");
		exit(1);
	}

	printf("%p\n", numPtr1);
	printf("%p\n", numPtr2);
	
	free(numPtr2); //메모리 해제(삭제)_쓰고 지운다.
	return 0;
}