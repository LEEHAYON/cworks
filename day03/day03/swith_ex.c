#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS


int main() {
	//������ ���� �޴� ������ �����ϴ� ���ǹ�
	int ranking = 1;
	char medalColor;

	switch (ranking) {
	case 1:
		medalColor = 'G';
		break;
	case 2:
		medalColor = 'S';
		break;
	case 3:
		medalColor = 'B';
		break;
	default ://if else���� ��
		medalColor = "N";
		break;
	}//switch end
	printf("%d�� �޴��� ������ %c", ranking, medalColor);

	return 0;
}