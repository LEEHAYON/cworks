#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS


int main() {
	//������ 1�� ����ϱ�
	/*
	int dan;
	int i;
	printf("���� �Է��ϼ��� : ");
	scanf_s("%d", &dan);

	for (i = 1; i < 10; i++) {
		printf("%d x %d = %d\n", dan, i, (dan * i));
	}
	*/
	//��ü ������ ����ϱ�
	int dan;
	int i;

		for (dan = 2; dan < 10; dan++) {
			for (i = 1; i < 10; i++) {
				printf("%d x %d = %d\n", dan, i, (dan * i));
			}
			printf("\n");
		}
	
	return 0;
}