#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int a = 10;//전역 변수(main위에 선언하는 변수)
int main() {

	int num1 = 10, num2 = 20; // 지역 변수
	static int s = 30; // 정적 변수(고정되어 있는 변수)


	printf("코드 영역 : 0x%p 0x%p\n", main, printf); //함수
	printf("스택 영역 : 0x%p 0x%p\n", &num1, &num2); //지역 변수
	printf("데이터 영역 : 0x%p 0x%p\n", &a, &s); //전역 변수, 정적 변수
	

	return 0;
}