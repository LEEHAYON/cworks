#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main() {
	//���̰��� ����� ���_if else if else��(�����оƵ�, �ʵ�, �߰��, �Ϲ���)
	//int age = 23;
	int age;
	int charge = 0;
	
	//���̺��� ���� ó��
	printf("���̸� �Է��ϼ��� : ");
	scanf_s("%d", &age);
	if (age < 8) {
		printf("������ �Ƶ��Դϴ�.\n");
		charge = 1000;
	}
	else if (age < 14) {//(age >= 8 && age<14)
		printf("�ʵ��л��Դϴ�.\n");
		charge = 2000;
	}
	else if (age < 20) {//(age >= 14 && age < 20)
		printf("�߰���л��Դϴ�.\n");
		charge = 2500;
	}else{//(age >= 20)
		printf("�Ϲ����Դϴ�.\n");
		charge = 3000;
	}
	printf("������ %d���Դϴ�.\n", charge);

	//�������� ��� �ű��



	return 0;
}