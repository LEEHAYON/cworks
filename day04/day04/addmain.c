#include <stdio.h>
#include "add.h"//만든건 " "으로 연결

int main() {

	int a, b, result;
	a = 1;
	b = 2;

	result = add(a, b);

	printf("합계 : %d\n", result);

	return 0;
}