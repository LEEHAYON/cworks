#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main() {
	//������ �����ϴ� ���α׷�
	// 90�̻� A, 80�� �̻� B, 70�� �̻� C, 60�� �̻� D, 60�� �̸� F

	int score;
	char ch;

	printf("������ �����ϼ��� : ");
	scanf_s("%d", &score);

	if (score >= 90) {
		ch = 'A';
	}
	else if (score >= 80) {
		ch = 'B';
	}
	else if (score >= 70) {
		ch = 'C';
	}
	else if (score >= 60) {
		ch = 'D';
	}
	else {
		ch = 'F';
	}
	printf("������ �̹� �б� ������ %c�Դϴ�.", ch);
	return 0;
}