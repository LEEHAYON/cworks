#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main() {
	int dice;
	int i;

	//rand()�Լ� - <stdlib.h> include
	//srand(seed) �Բ� ��� - seed ����
	srand(time(NULL)); //�ð��� ��� �帧���� seed���� �����
	printf("%d\n", rand());

	//�ֻ��� ����� - 10�� ������
	for (i = 0; i < 10; i++) {
		dice = rand() % 6 + 1; //1 ~ 6�� ����
		printf("�ֻ��� �� : %d\n", dice);
	}

	return 0;
}