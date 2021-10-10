#include <stdio.h>
#define PI 3.1415 //매크로 상수(전처리)_컴파일을 안함, 3.1415를 PI라고 쓰겠다 선언, 자료형 기입하면 안됨
#define MIN_NUM 1
#define MAX_NUM 2


int main() {
	int r = 5;
	float area;

	area = PI * r * r;

	printf("%.2f\n", area);//78.537498
	printf("최대값 : %d\n", MAX_NUM);
	printf("최대값 : %d\n", MIN_NUM);


	return 0;
}