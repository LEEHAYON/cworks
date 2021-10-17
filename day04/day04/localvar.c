#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

void ab10(int a, int b) {//ab10함수의 지역변수
	a *= 10; //a = a * 10 
	b *= 10; //b = b * 10 
	//a = 10, b = 20 _ 호출하고 끝
}

int main() {
	int a, b; //main의 지역변수

	a = 1; 
	b = 2;

	ab10(a, b); //ab10의 a, b가 소멸함

	printf("a = %d b = %d", a, b); //결과 값 : a = 1 b = 2 _ main의 a,b임 

	return 0;
}