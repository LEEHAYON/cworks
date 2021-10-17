#include <stdio.h>
#include <math.h>
#define _CRT_SECURE_NO_WARNINGS

int main() {
	//수학 관련 함수는 math.h를 include함
	//절대값 계산하기
	printf("%d\n",abs(3));
	printf("%d\n",abs(-3));

	//반올림
	printf("%.1f\n", round(2.54));//3.0
	printf("%.1f\n", round(2.3));//2.0
	printf("%.1f\n", round(-2.3));//-2.0
	printf("%.1f\n", round(-2.5));//-3.0

	//버림(내림)_더 작은 수로 버림
	printf("%.1f\n", floor(2.54));//2.0
	printf("%.1f\n", floor(2.9));//2.0
	printf("%.1f\n", floor(-2.54));//-3.0
	printf("%.1f\n", floor(-2.3));//-3.0


	return 0;
}