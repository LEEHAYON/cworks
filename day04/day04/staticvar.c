#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

void count() {
	int x = 0; //��������
	static int y = 0; //����(����)����(static Ű���� ���)
	x += 1;
	y += 1;
	printf("x = %d, y = %d\n", x, y);
}

int main() {

	count();
	count();
	count();

	return 0;
}