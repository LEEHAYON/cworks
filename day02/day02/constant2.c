#include <stdio.h>
#define PI 3.1415 //��ũ�� ���(��ó��)_�������� ����, 3.1415�� PI��� ���ڴ� ����, �ڷ��� �����ϸ� �ȵ�
#define MIN_NUM 1
#define MAX_NUM 2


int main() {
	int r = 5;
	float area;

	area = PI * r * r;

	printf("%.2f\n", area);//78.537498
	printf("�ִ밪 : %d\n", MAX_NUM);
	printf("�ִ밪 : %d\n", MIN_NUM);


	return 0;
}