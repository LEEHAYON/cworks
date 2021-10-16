#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main() {
	//내부 if문
	//조건 수가 10이상이며 짝수인 경우
	//수가 10이상이며 홀수인 경우
	//수가 10보다 작고 짝수인 경우
	//수가 10보다 작은 홀수
	int num;
	printf("정수를 입력하시오 : ");
	scanf_s("%d", &num);

	//if~else if~else
	if (num >= 10 && num % 2 == 0) {
		printf("%d는 10이상의 짝수입니다.\n", num);
	}
	else if (num >= 10&& num % 2 != 0) {
		printf("%d는 10이상의 홀수입니다.\n", num);
	}
	else if (num < 10 && num % 2 == 0) {
		printf("%d는 10미만의 짝수입니다.\n", num);
	}
	else {
		printf("%d는 10미만의 홀수입니다.\n", num);
	}


	/*if (num >= 10) {
		if (num % 2 == 0) {
			printf("%d는 10이상의 짝수입니다.\n", num);
		}
		else {
			printf("%d는 10이상의 홀수입니다.\n", num);
		}
	}
	else {
		if (num % 2 == 0) {
			printf("%d는 10보다 작은 짝수입니다.\n", num);
		}
		else {
			printf("%d는 10보다 작은 홀수입니다.\n", num);
		}
	}*/





	return 0;
}