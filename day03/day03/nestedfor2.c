#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS


int main() {
	//ÁßÃ¸ for
	/*
	1  2  3  4  5
	6  7  8  9  10
	11 12 13 14 15
	16 17 18 19 20
	*/
	int i, j;
	for (i = 0; i < 5; i++) {
		for (j = 0; j < 5; j++) {
			printf("%d",j+1);
		}
		printf("\n");
	}

	return 0;
}