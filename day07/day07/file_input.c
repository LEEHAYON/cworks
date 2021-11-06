#include <stdio.h>

int main() {
	FILE* fp;
	fopen_s(&fp, "hello.txt", "r");// 읽기 모드 - "r", "rt"도 사용가능
	if (fp == NULL) { //예외처리 필수
		puts("파일을 열 수 없습니다.");  //puts("문자열") - 문자열만 넣고 싶을때
		return -1; //오류가 발생했을때 종료
	}
	int ch = 0;


	/*while (1) {
		int ch = fgetc(fp);   //fgetc - 한 문자씩 가져오기
		if (ch == EOF) break; //EOF(End Of File) = -1
		//putchar(ch);          //putchar - 한 문자씩 출력
		printf("%c", ch);
	 }*/

	while ((ch==fgetc(fp))!=EOF){
		putchar(ch);
	}

	fclose(fp);

	return 0;
}