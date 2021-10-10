#include <stdio.h>

int main() {
	//문자 자료형
	char ch = 'a'; //문자형 변수 ch를 선언하고, 'a'를 저장
	printf("%c\n", ch);//결과 값 : a
	printf("%d\n", ch);//아스키 코드값을 보겠다.

	//자료형의 크기
	printf("char 형 = %dByte\n", sizeof(char)); //1byte

	ch = 98;
	printf("%c\n", ch);//결과 값 : b
	printf("%c\n", ch + 1);//결과 값 : c
	printf("%d\n", ch);//결과 값 : 98(아스키 코드 값)

	//영문 문자열과 한글은 배열로 표현
	char f[7] = "banana";//배열, 문자열은 쌍따옴표로 감싼다.(뒤에 '\0', null이 숨어 있어서 기존 문자 수에 1더해서 []에 기입
	char h[3] = "가";
	char h2[] = "\uD55C";//유니코드
	char h3[] = "\uAE00";//유니코드

	printf("%s\n", f);
	printf("%s\n", h);
	printf("%s", h2);//결과 값 : 한
	printf("%s\n", h3);//결과 값 : 글

	return 0;
}