#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

//typedef로 구조체 재정의
typedef struct _Three_D {//_를 붙여서 별명을 붙임
	int x, y, z;
} Three_D;

int main() {
	Three_D d3;
	Three_D d4;

	d3.x = 100;
	d3.y = 200;
	d3.z = 300;

	//구조체 객체 복사
	d4 = d3;//d3을 d4에 저장

	printf("x좌표 : %d, y좌표 : %d, z좌표 : %d\n", d3.x, d3.y, d3.z);
	printf("x좌표 : %d, y좌표 : %d, z좌표 : %d\n", d4.x, d4.y, d4.z);

	return 0;
}