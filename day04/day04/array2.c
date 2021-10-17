#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main() {
	int arr[] = { 10, 20, 30, 40 }; //배열 선언과 동시에 값 저장(초기화)
	int i;
	int sum = 0;

	//30을 출력
	printf("arr[2] = %d\n", arr[2]);

	//전체 출력
	for (i = 0; i < 4; i++) {
		printf("%3d", arr[i]);
	}

	//합계
	for (i = 0; i < 4; i++) {
		sum += arr[i];
	}
	printf("\n합계 : %d", sum);

	return 0;
}