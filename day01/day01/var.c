#include <stdio.h>

main() {
	//변수 선언 - 자료형(int) 변수이름(a);
	int a;//정수형 변수 a를 선언함
	int b;
	int c = -5;//선언과 동시에 초기화했다.

	a = 5;//변수이름 = 값(대입) : 초기화 5를 a에 대입한다의 뜻
	b = 7;//값을 대입하는 것을 '초기화한다'라고 한다.

	a = a + 1; //반영 값은 맨 마지막에 대입한 값으로 출력

	//자료형의 크기
	printf("int 형 = %dByte\n", sizeof(int));//4byte-32bit

	printf("%d\n", a);
	printf("%d\n", b);
	printf("%d\n", c);
	printf("선영이 나이는 %d살이고, 현수나이는 %d살이다.", a, b);

}