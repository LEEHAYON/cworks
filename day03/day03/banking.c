#include <stdio.h>
#include <stdbool.h>
#define _CRT_SECURE_NO_WARNINGS
int main() {
	//���� ���� ���α׷�
	//int sw = 1; //����ġ���� -����� �ߴ��� ����
	bool sw = true; //bool �ڷ���
	int balance = 0;//�ܰ�

	while (sw) {
		int selNO;//���� ����
		int money;//����� ��
		printf("====================================\n");
		printf(" 1.���� | 2.��� | 3.�ܰ� |4.���� \n");
		printf("====================================\n");
		printf("����> ");
		scanf_s("%d", &selNO);

		//����ó��
		//����
		if (selNO == 1) {
			printf("���ݾ�> ");
			scanf_s("%d", &money);
			balance += money;
		}
		else if (selNO == 2) {
			printf("��ݾ�> ");
			scanf_s("%d", &money);
			balance -= money;
		}
		else if (selNO == 3) {
			printf("�ܰ�> %d\n", balance);
		}
		else if (selNO == 4) {
			sw = false; //����_int sw = 1�� ��� sw = 0;
			//sw������ ���� ��쿡�� break;�����ؾ���
		}
		else {
			printf("�������� �ʴ� ����Դϴ�.\n");
		}
	}//while����
	printf("���α׷� ����");

	

	return 0;
}