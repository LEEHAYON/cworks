#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
int main() {
	//���� ���� ���α׷�
	int sw = 1; //����ġ���� -����� �ߴ��� ����
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
			//��ݾ��� �ܾ��� �ʰ��� ��쿡 "�ܾ��� �ʰ��߽��ϴ�. �ٽ� �Է����ּ���."
			while (sw) {
				printf("��ݾ�> ");
				scanf_s("%d", &money);
				if (money > balance) {
					printf("�ܾ��� �ʰ��߽��ϴ�. �ٽ� �Է����ּ���.\n");
				}
				else {
					balance -= money;
					printf("���� ó���Ǿ����ϴ�.\n");
					break;
				}
			}
		}
		else if (selNO == 3) {
			printf("�ܰ�> %d\n", balance);
		}
		else if (selNO == 4) {
			sw = 0; //����
		}
		else {
			printf("�������� �ʴ� ����Դϴ�.\n");
		}
	}//while����
	printf("���α׷� ����");

	system("pause");

	return 0;
}