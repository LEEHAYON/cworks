#include <stdio.h>

int main() {
	//조건 연산자 - 조건식 ? 참 : 거짓
	int value;
	value = (3 > 4) ? 10 : 20;
	printf("결과 값 : %d\n", value);//결과 값 : 20(거짓이기에)

	int fatherAge = 35;
	int motherAge = 38;

	printf("%d\n", fatherAge);//저장의 값
	printf("%x\n", &fatherAge);//&주소의 값, %d -> 10진수, %x -> 16진수

	char ch = (fatherAge > motherAge) ? 'T' : 'F';
	printf("결과 값 : %c\n", ch);
	return 0;
}