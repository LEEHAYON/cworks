#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS


int main() {
	//operator���� + - * / �� ��� ��Ģ����


	int num1 = 10;
	int num2 = 2;
	char operator;
	int result;
	printf("����� �����ڸ� �����Ͻÿ�.");
	scanf_s('%c', &operator);

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
		printf("������ �����Դϴ�.\n");
		return;//��� ���α׷� ����
	}
	printf("��� ���� %d�Դϴ�.\n", result);


	return 0;
}