#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main() {
	//학점을 판정하는 프로그램
	// 90이상 A, 80점 이상 B, 70점 이상 C, 60점 이상 D, 60점 미만 F

	int score;
	char ch;

	printf("학점을 기입하세요 : ");
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
	printf("귀하의 이번 학기 학점은 %c입니다.", ch);
	return 0;
}