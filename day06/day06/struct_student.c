#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>


//struct ����ü �ڷ��� ����
struct Student {
	int number; //�л��� ��ȣ(���_���� ���� - �ʱ�ȭ ���� ����_���� ���ڸ� ���� ����, ���� ��)
	char name[20]; //�̸�
	double weight; //������
};


int main() {
	struct Student s1; //s1�� ��ü ����(�� ���� ���)
	s1.number = 101;
	//s1.name = "���ϴ�";
	strcpy(s1.name, "���ϴ�");
	s1.weight = 62.3;

	printf("�й� : %d\n ", s1.number);
	printf("�̸� : %s\n", s1.name);
	printf("������ : %3.1lf\n",s1.weight);

	//s2 �����ϱ�
	struct Student s2; //s1�� ��ü ����(�� ���� ���)
	s2.number = 102;
	strcpy(s2.name, "��ä��");
	s2.weight = 59.8;

	printf("�й� : %d\n ", s2.number);
	printf("�̸� : %s\n", s2.name);
	printf("������ : %3.1lf\n", s2.weight);

	return 0;
}