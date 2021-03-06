#include <stdio.h>
#include <stdlib.h>
#define _CRT_SECURE_NO_WARNINGS

int main() {
	int* ip;
	int i;

	ip = (int*)malloc(sizeof(int) * 4);
	if (ip == NULL) { //에러 처리(필수)
		printf("동적 메모리 할당에 실패했습니다.\n");
		exit(1); //즉시 종료
	}
	//역참조 저장하기
	*(ip + 0) = 10;
	*(ip + 1) = 20;
	*(ip + 2) = 30;
	*(ip + 3) = 40;

	// 배열로 저장하기
	ip[0] = 10;
	ip[1] = 20;
	ip[2] = 30;
	ip[3] = 40;

	//출력
	for (i = 0; i < 4; i++) {
		printf("%3d %3d\n", *(ip + i), ip[i]);
	}

	free(ip);//메모리 해제(삭제)_쓰고 지운다.
	return 0;
}