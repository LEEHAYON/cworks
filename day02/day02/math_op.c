#include<stdio.h>

int main() {
	int a = 99;
	int b = 2;

	printf("%d\n", a + b);//��� �� : 101
	printf("%d\n", a - b);//��� �� : 97
	printf("%d\n", a * b);//��� �� : 198
	printf("%d\n", a / b);//��� �� : 49
	printf("%d\n", a % b);//��� �� : 1_������

	//1����(������)_for���� ���� ���
	printf("%d\n", a++);//��� �� : 99_�ǹ� a = a + 1, a+=1 (���� a���� 1���� ���� �ݿ��Ͽ� ���)
	printf("%d\n", a);//��� �� : 100

	//1����(������)
	printf("%d\n", ++a);//��� �� : 101_�ǹ� a = a + 1(�̹� a���� 1���� ���� �ݿ��Ͽ� ���)
	printf("%d\n", a);//��� �� : 101

	//1����(������)_for���� ���� ���
	printf("%d\n", a--);//��� �� : 101_�ǹ� a = a - 1(���� a���� 1������ ���� �ݿ��Ͽ� ���)
	printf("%d\n", a);//��� �� : 100

	//1����(������)
	printf("%d\n", --a);//��� �� : 99_�ǹ� a = a - 1(�̹� a���� 1������ ���� �ݿ��Ͽ� ���)
	printf("%d\n", a);//��� �� : 99

	//���մ��� ������
	a += 2;//a = a + 2;
	printf("%d\n", a);//��� �� : 101

	a -= 2;//a = a - 2;
	printf("%d\n", a);//��� �� : 99

	b *= 3;//b = b * 3;
	printf("%d\n", b);//��� �� : 6

	b /= 2;
	printf("%d\n", b);//��� �� : 3

	
	return 0;
}