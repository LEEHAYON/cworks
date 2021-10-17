#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main() {
	//배열의 복사
	char a1[] = "TEN";
	char a2[4]; //a1을 저장
	int i;


	//a1을 a2에 저장
	for (i = 0; i < 4; i++) {
		a2[i] = a1[i];
	}

	//출력
	printf("%s\n", a1);
	printf("%s\n", a2);
	

	//a1를 a2에 거꾸로 복사(저장)
	for (i = 0; i < 4; i++) {
		a2[i] = a1[2-i];
	}
	a2[3] = '\0';
	//a2[0] = a1[2] 'N'
	//a2[1] = a1[1] 'E'
	//a2[2] = a1[0] 'T'
	printf("%s\n", a1);
	printf("%s\n", a2);

	return 0;
}