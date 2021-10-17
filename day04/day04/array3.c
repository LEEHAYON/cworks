#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main() {
	//교재 p.191
	int family[3];

	family[0] = 101;
	family[1] = 102;
	family[2] = 103;

	printf("시온이네 호텔 방 번호는 %d호입니다.\n", family[0]);
	printf("지훈이네 호텔 방 번호는 %d호입니다.\n", family[1]);
	printf("할아버지 할머니 호텔 방 번호는 %d호입니다.\n", family[2]);

	//family의 메모리 주소_두 개의 출력되는 값(주소)은 같다.
	printf("%x\n", &family[0]);
	printf("%x\n", family);

	return 0;
}