#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main() {
	int a[3];
	int i;
	int sum = 0;
	//값저장
	a[0] = 10;
	a[1] = 20;
	a[2] = 30;

	//배열의 주소 - 배열의 이름(a)은 배열의 시작 주소와 같다.
	printf("%x %x %x\n", &a[0], &a[1], &a[2]);
	printf("%x %x %x\n", a, a + 1, a + 2);

	//전체 조회(출력)
	for (i = 0; i < 3; i++) {//0,1,2
		printf("%d\n", a[i]);
	}

	//메모리의 크기
	printf("a배열의 메모리의 크기는 %dbyte\n", sizeof(a));//결과 값 : 12byte

	//합계
	//printf("합계 : %d\n", a[0]+a[1]+a[2]);

	for (i = 0; i < 3; i++) {
		sum += a[i]; //sum = sum + a[i];
	}
	printf("합계 : %d\n", sum);

	return 0;
}