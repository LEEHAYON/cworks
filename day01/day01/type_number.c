#include <stdio.h>

int main() {

	//숫자 자료형의 범위
	char val = -128; //-128~127
	printf("%d\n", val);

	char val2 = 128; //결과 값 : -128, 범위 초과(overflow)시 순환됨
	printf("%d\n", val2);

	unsigned char val3 = 128; //unsigned 적용시 구간이 0~256까지임
	printf("%d\n", val3);

	//int형 자료
	int iNum = 2147483647; //약 -21억 ~ 약21억
	printf("%d\n", iNum);

	int iNum2 = 2147483648; //결과값 : -2147483648, overflow로 인해 결과 순환 적용
	printf("%d\n", iNum2);

	//실수형 정밀도 비교
	float fNum = 1.1234567;//소수 6자리까지 가능(반올림함)
	double dNum = 1.123456789012345;//소수 15자리까지 가능

	printf("%f\n", fNum);
	printf("%.15lf\n", dNum);


	return 0;
}