#include <stdio.h>

int main() {
	int blue = 1;
	int red = 2;
	int yellow;

	printf("===== ��ȯ�� =====\n");
	printf("blue = %d\n", blue);
	printf("red = %d\n", red);

	//��ȯ ó��

	yellow = blue;
	blue = red;
	red = yellow;

	printf("===== ��ȯ�� =====\n");
	printf("blue = %d\n", blue);
	printf("red = %d\n", red);

	return 0;
}