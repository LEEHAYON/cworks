#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main() {
	//문자열 배열 선언과 사용
	char fruit1[] = { 'a', 'p', 'p', 'l', 'e', '\0'};//'\0' = null(맨 끝이라는 것을 알려주는 지표)
	char fruit2[] = "apple";//1차원 배열
	char name[20];

	//출력
	printf("%s\n", fruit1);
	printf("%s\n", fruit2);

	//이름을 물어볼때 사용하기
	printf("당신의 이름은 무엇인가요?");
	scanf_s("%s", name, sizeof(name));//배열인 경우 (서식문자, 배열, 배열의 크기_sizeof(이름))
	printf("당신의 이름은 %s이군요.", name);

	return 0;
}