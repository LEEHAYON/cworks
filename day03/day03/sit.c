#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main() {

	int customerNum; //입장객 수
	int columnNum; //열의 수
	int rowNum; //줄 수
	int i, j, num;

	printf("입장객 수 입력 : ");
	scanf_s("%d", &customerNum);

	printf("좌석 열의 수 입력 : ");
	scanf_s("%d", &columnNum);

	//나누어 떨어지는 경우 줄 수는 몫
	//나누어 떨어지지 않는 경우의 줄 수는 몫+1
	//if~else
	if (customerNum % columnNum == 0) {
		rowNum = customerNum / columnNum;
	}
	else {
		rowNum = customerNum / columnNum + 1;
	}
	//printf("%d개의 줄이 필요 합니다.", rowNum);

	for (i = 0; i < rowNum; i++) {
		for (j = 0; j <= columnNum; j++) {
			num = i * columnNum + j;
			printf("%d ", num);
			if (num == customerNum)
				break;
		}
		printf("\n");
	}
	return 0;
}