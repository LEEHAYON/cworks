#include <stdio.h>

int main() {
	int blue = 1;
	int red = 2;
	int yellow;

	printf("===== 교환전 =====\n");
	printf("blue = %d\n", blue);
	printf("red = %d\n", red);

	//교환 처리

	yellow = blue;
	blue = red;
	red = yellow;

	printf("===== 교환후 =====\n");
	printf("blue = %d\n", blue);
	printf("red = %d\n", red);

	return 0;
}