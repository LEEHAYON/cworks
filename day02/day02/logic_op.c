#include <stdio.h>

int main() {
	//비교 연산자 (결과 반영 값 : 참->1, 거짓->0)
	printf("10 == 10의 값은 %d입니다.\n", 10 == 10);//1
	printf("10!= 10의 값은 %d입니다.\n", 10 != 10);//0
	printf("10 > 10의 값은 %d입니다.\n", 10 > 10);//0
	printf("10 >= 10의 값은 %d입니다.\n", 10 >= 10);//1
	// (10 > 10) || (10 == 10)

	//논리 연산자(&&,||,!)_if, swith문에 사용됨
	int a = 5;
	int b = 3;
	int c = 2;

	printf("0 && 0의 값은 %d입니다.\n", (a < b) && (b < c));//0
	printf("0 && 1의 값은 %d입니다.\n", (a < b) && (b > c));//0
	printf("1 && 1의 값은 %d입니다.\n", (a > b) && (b > c));//1

	printf("0 || 0의 값은 %d입니다.\n", (a < b) || (b < c));//0
	printf("0 || 1의 값은 %d입니다.\n", (a < b) || (b > c));//1
	printf("1 || 0의 값은 %d입니다.\n", (a > b) || (b < c));//1
	printf("1 || 1의 값은 %d입니다.\n", (a > b) || (b > c));//1

	printf("!0의 값은 %d입니다.\n", !(a < b));//1
	printf("!1의 값은 %d입니다.\n", !(b > c));//0

	return 0;
}