#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS


int main() {
	//operator값이 + - * / 인 경우 사칙연산
	int num1 = 10;
	int num2 = 2;
	char operator='+';
	int result=0;

	//switch~case문 작성
	switch (operator) {
	case '+':
		result = num1 + num2;
		break;
	case '-':
		result = num1 - num2;
		break;
	case '*':
		result = num1 * num2;
		break;
	case '/':
		result = num1 / num2;
		break;
	default :
		printf("연산자 오류입니다.\n");
		break;
	}



	/*printf("사용할 연산자를 기입하시오.");
	scanf_s('%c', &operator);
	*/

	/*
	if (operator=='+') {
		result = num1 + num2;
	}
	else if (operator=='-') {
		result = num1 - num2;
	}
	else if (operator=='*') {
		result = num1 * num2;
	}
	else if (operator=='/') {
		result = num1 / num2;
	}
	else {
		printf("연산자 오류입니다.\n");
		return;//즉시 프로그램 종료
	}
	*/
	printf("결과 값은 %d입니다.\n", result);
	

	return 0;
}