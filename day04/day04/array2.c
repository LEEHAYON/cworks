#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main() {
	int arr[] = { 10, 20, 30, 40 }; //�迭 ����� ���ÿ� �� ����(�ʱ�ȭ)
	int i;
	int sum = 0;

	//30�� ���
	printf("arr[2] = %d\n", arr[2]);

	//��ü ���
	for (i = 0; i < 4; i++) {
		printf("%3d", arr[i]);
	}

	//�հ�
	for (i = 0; i < 4; i++) {
		sum += arr[i];
	}
	printf("\n�հ� : %d", sum);

	return 0;
}