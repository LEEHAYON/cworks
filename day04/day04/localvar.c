#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

void ab10(int a, int b) {//ab10�Լ��� ��������
	a *= 10; //a = a * 10 
	b *= 10; //b = b * 10 
	//a = 10, b = 20 _ ȣ���ϰ� ��
}

int main() {
	int a, b; //main�� ��������

	a = 1; 
	b = 2;

	ab10(a, b); //ab10�� a, b�� �Ҹ���

	printf("a = %d b = %d", a, b); //��� �� : a = 1 b = 2 _ main�� a,b�� 

	return 0;
}