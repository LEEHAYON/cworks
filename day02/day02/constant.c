#include <stdio.h>

int main() {
	/*��� �����
	* �ѹ� ������ �θ� �� ���α׷��� ���� �� ������ ���� ����� �� ���� ��
	* ����� ���ڷ� ���� ��Ÿ���� �ͺ��� �̸��� �ٿ� ����ϴ� ���� ����.
	* ��� �̸��� �빮�ڷ� ���������� ���.
	* #define ����̸� �����-��ũ�� ����� ����(��ó��, �����ϵ��� ����)
	* const �ڷ��� ����̸� = �����;��
	*/
	const int MIN_NUM = 1;//����� �빮�ڷ� ����(����)
	const int MAX_NUM = 100;
	const float PI = 3.1415;//��� PI�� 3.1415�� ������
	int radius = 5;
	float area;

	//MIN_NUM = 10;
	//max_num = 1000; ����� ������ �� ����

	printf("%d\n", MIN_NUM);
	printf("%d\n", MAX_NUM);

	//���� ���� ����ϱ� : PI * ������ * ������
	area = PI * radius * radius;
	printf("%f\n", area);//78.537506
	return 0;
}