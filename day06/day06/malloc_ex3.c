#include <stdio.h>
#include <stdlib.h>
#define _CRT_SECURE_NO_WARNINGS

int main() {
	//알파벳 대문자 26개를 저장
	char* cp;
	int i;
	cp = (char*)malloc(sizeof(char) * 50);

	if (cp == NULL) { //에러 처리(필수)
		printf("동적 메모리 할당에 실패했습니다.\n");
		exit(1); //즉시 종료
	}
	
	for (i = 0; i < 26; i++) {
		*(cp + i) = 'A' + i;
	}

	//printf("%d\n", i); //26
	*(cp + i) = '\0'; 
	printf("%s", cp); //문자열로 출력_문자열일때는 +1 기억하기

	free(cp);//메모리 해제(삭제)_쓰고 지운다.
	return 0;
}