#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int a = 10;//���� ����(main���� �����ϴ� ����)
int main() {

	int num1 = 10, num2 = 20; // ���� ����
	static int s = 30; // ���� ����(�����Ǿ� �ִ� ����)


	printf("�ڵ� ���� : 0x%p 0x%p\n", main, printf); //�Լ�
	printf("���� ���� : 0x%p 0x%p\n", &num1, &num2); //���� ����
	printf("������ ���� : 0x%p 0x%p\n", &a, &s); //���� ����, ���� ����
	

	return 0;
}