#include <stdio.h>

int main() {
	//자동 형변환
	int iNum = 20;
	float fNum = iNum;

	printf("%f\n", fNum);

	//강제 형변환 : 작은자료형 = (작은자료형)큰자료형
	double dNum = 2.54;
	int iNum2 = (int)dNum;
	printf("%d\n", iNum2);

	//연산
	dNum = 1.2;
	fNum = 0.9;

	iNum = (int)dNum + (int)fNum;
	printf("%d\n", iNum);//결과 값 : 1 이유 -> 1+0이기때문에

	iNum = (int)(dNum + fNum);
	printf("%d\n", iNum);//결과 값 : 2 이유 -> 1.2+0.9이기때문에

	//사칙연산(+,-,*,/)
	int n1 = 10, n2 = 4; //변수 중복 선언할 때 콤마(,)사용
	int result;
	double result2;

	result = n1 + n2;
	printf("%d\n", result); //14

	result = n1 - n2;
	printf("%d\n", result);//6

	result = n1 * n2;
	printf("%d\n", result);//40

	result2 = (double)(n1 / n2);
	printf("%0.1lf\n", result2);

	return 0;
}