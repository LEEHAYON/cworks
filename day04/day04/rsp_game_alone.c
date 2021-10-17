#include <stdio.h>
#include <stdlib.h>
#define _CRT_SECURE_NO_WARNINGS

int main() {
	int rsp;
	int rsp2;
	int p1;
	int p2;
	printf("플레이어 1은 정수를 입력하시오.");
	scanf_s("%d", &p1);
	printf("플레이어 2는 정수를 입력하시오.");
	scanf_s("%d", &p2);

	rsp = rand(p1) % 3 + 1;
	if (rsp == 1) {
		printf("가위\n");
	}
	else if(rsp == 2){
		printf("바위\n");
	}
	else {
		printf("보\n");
	}

	rsp2 = rand(p2) % 3 + 1;
	if (rsp2 == 1) {
		printf("가위\n");
	}
	else if (rsp2 == 2) {
		printf("바위\n");
	}
	else {
		printf("보\n");
	}

	return 0;
}