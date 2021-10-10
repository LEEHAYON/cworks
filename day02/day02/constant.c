#include <stdio.h>

int main() {
	/*상수 선언법
	* 한번 설정해 두면 그 프로그램이 종료 될 때까지 결코 변경될 수 없는 값
	* 상수를 숫자로 직접 나타내는 것보다 이름을 붙여 사용하는 것이 좋다.
	* 상수 이름은 대문자로 관례적으로 사용.
	* #define 상수이름 상수값-매크로 상수로 정의(전처리, 컴파일되지 않음)
	* const 자료형 상수이름 = 상수값;ㅔ
	*/
	const int MIN_NUM = 1;//상수는 대문자로 하자(관행)
	const int MAX_NUM = 100;
	const float PI = 3.1415;//상수 PI에 3.1415를 저장함
	int radius = 5;
	float area;

	//MIN_NUM = 10;
	//max_num = 1000; 상수는 변경할 수 없음

	printf("%d\n", MIN_NUM);
	printf("%d\n", MAX_NUM);

	//원의 넓이 계산하기 : PI * 반지름 * 반지름
	area = PI * radius * radius;
	printf("%f\n", area);//78.537506
	return 0;
}