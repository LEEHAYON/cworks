#include <stdio.h>

int main() {
	//���� ������ - ���ǽ� ? �� : ����
	int value;
	value = (3 > 4) ? 10 : 20;
	printf("��� �� : %d\n", value);//��� �� : 20(�����̱⿡)

	int fatherAge = 35;
	int motherAge = 38;

	printf("%d\n", fatherAge);//������ ��
	printf("%x\n", &fatherAge);//&�ּ��� ��, %d -> 10����, %x -> 16����

	char ch = (fatherAge > motherAge) ? 'T' : 'F';
	printf("��� �� : %c\n", ch);
	return 0;
}