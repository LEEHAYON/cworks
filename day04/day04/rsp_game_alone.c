#include <stdio.h>
#include <stdlib.h>
#define _CRT_SECURE_NO_WARNINGS

int main() {
	int rsp;
	int rsp2;
	int p1;
	int p2;
	printf("�÷��̾� 1�� ������ �Է��Ͻÿ�.");
	scanf_s("%d", &p1);
	printf("�÷��̾� 2�� ������ �Է��Ͻÿ�.");
	scanf_s("%d", &p2);

	rsp = rand(p1) % 3 + 1;
	if (rsp == 1) {
		printf("����\n");
	}
	else if(rsp == 2){
		printf("����\n");
	}
	else {
		printf("��\n");
	}

	rsp2 = rand(p2) % 3 + 1;
	if (rsp2 == 1) {
		printf("����\n");
	}
	else if (rsp2 == 2) {
		printf("����\n");
	}
	else {
		printf("��\n");
	}

	return 0;
}