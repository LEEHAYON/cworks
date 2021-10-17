#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
int square(int);
int add(int, int);

int main() {

	int x1;
	scanf_s("%d", &x1);
	int result = square(x1);//square 호출

	int result2 = add(4, 5);//add 호출

	printf("%d\n", result);
	printf("%d\n", result2);

	return 0;
}

//제곱수 구하는 함수 - ex) 3 * 3 =9
int square(int x){//return이 있꼬 매개변수가 1개인 함수
	return x * x;
}

//두 수를 곱하는 함수
int add(int x, int y) {
	return x * y;
}