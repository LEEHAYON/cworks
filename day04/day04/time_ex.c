#include <stdio.h>
#include <Windows.h>
#define _CRT_SECURE_NO_WARNINGS

int main() {

	//time_t t = time(NULL); //time_t �ð� �ڷ���
	time_t t, start, end;
	
	t = time(NULL);
	int i;

	printf("%ld��\n", t); //%d, %ld
	//1634441658��, 1970. 1. 1 �������� ������� �ð�

	//1���� 10���� ���(��� �ð��� ����) - ���� �ð� ����
	//Sleep(1000) -> 1�� <Windows.h> �ʿ�
	start = time(NULL); //���� �ð�

	for (i = 1; i <=20; i++) {
		printf("%d\n", i);
		Sleep(50);//0.05��
	}

	end = time(NULL);

	//double diff_timer = difftime(end, start);
	double diff_timer = (double)(end-start); //����ȯ
	printf("����ð� : %1f��\n", diff_timer);

	return 0;
}