#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main() {
	//�迭 ������ ���� �� ���
	int a[4] = { 1,2,3,4 };
	int i;
	int* b;
	//b = &a[0];
	b = a;//a�� �ּҸ� b�� ����
	
	printf("==�迭 a ���==\n");
	for (i = 0; i < 4; i++) {
		printf("%2d", a[i]);
	}

	printf("\na[0]�� �� : %d\n", a[0]);
	printf("a[0]�� �� : %d\n", *b + 0);

	printf("==������ �迭 b ���==\n");
	for (i = 0; i < 4; i++) {
		printf("%2d", *(b + i));
	}
	return 0;
}