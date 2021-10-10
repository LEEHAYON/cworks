#include<stdio.h>

int main() {
	int a = 99;
	int b = 2;

	printf("%d\n", a + b);//결과 값 : 101
	printf("%d\n", a - b);//결과 값 : 97
	printf("%d\n", a * b);//결과 값 : 198
	printf("%d\n", a / b);//결과 값 : 49
	printf("%d\n", a % b);//결과 값 : 1_나머지

	//1증가(후증가)_for문에 많이 사용
	printf("%d\n", a++);//결과 값 : 99_의미 a = a + 1, a+=1 (다음 a부터 1더한 수를 반영하여 출력)
	printf("%d\n", a);//결과 값 : 100

	//1증가(선증가)
	printf("%d\n", ++a);//결과 값 : 101_의미 a = a + 1(이번 a부터 1더한 수를 반영하여 출력)
	printf("%d\n", a);//결과 값 : 101

	//1감소(후증가)_for문에 많이 사용
	printf("%d\n", a--);//결과 값 : 101_의미 a = a - 1(다음 a부터 1감소한 수를 반영하여 출력)
	printf("%d\n", a);//결과 값 : 100

	//1감소(선증가)
	printf("%d\n", --a);//결과 값 : 99_의미 a = a - 1(이번 a부터 1감소한 수를 반영하여 출력)
	printf("%d\n", a);//결과 값 : 99

	//복합대입 연산자
	a += 2;//a = a + 2;
	printf("%d\n", a);//결과 값 : 101

	a -= 2;//a = a - 2;
	printf("%d\n", a);//결과 값 : 99

	b *= 3;//b = b * 3;
	printf("%d\n", b);//결과 값 : 6

	b /= 2;
	printf("%d\n", b);//결과 값 : 3

	
	return 0;
}