#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main() {
	//문자 배열 선언과 사용
	char alphabet[26];
	char ch = 'A';
	int i;

	//'A' 출력
	printf("%c %d\n", ch, ch);
	printf("%c %d\n", ch+1, ch+1);

	//배열에 저장
	for (i = 0; i < 26; i++) {
		alphabet[i] = ch;
		ch++;
	}

	//전체 출력
	for (i = 0; i < 26; i++) {
		printf("%c 아스키코드 값 : %d\n", alphabet[i], alphabet[i]);
	}

	return 0;
}