#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
int square(int);
int add(int, int);

int main() {

	int x1;
	scanf_s("%d", &x1);
	int result = square(x1);//square ȣ��

	int result2 = add(4, 5);//add ȣ��

	printf("%d\n", result);
	printf("%d\n", result2);

	return 0;
}

//������ ���ϴ� �Լ� - ex) 3 * 3 =9
int square(int x){//return�� �ֲ� �Ű������� 1���� �Լ�
	return x * x;
}

//�� ���� ���ϴ� �Լ�
int add(int x, int y) {
	return x * y;
}