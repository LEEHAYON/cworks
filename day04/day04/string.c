#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main() {
	//���ڿ� �迭 ����� ���
	char fruit1[] = { 'a', 'p', 'p', 'l', 'e', '\0'};//'\0' = null(�� ���̶�� ���� �˷��ִ� ��ǥ)
	char fruit2[] = "apple";//1���� �迭
	char name[20];

	//���
	printf("%s\n", fruit1);
	printf("%s\n", fruit2);

	//�̸��� ����� ����ϱ�
	printf("����� �̸��� �����ΰ���?");
	scanf_s("%s", name, sizeof(name));//�迭�� ��� (���Ĺ���, �迭, �迭�� ũ��_sizeof(�̸�))
	printf("����� �̸��� %s�̱���.", name);

	return 0;
}