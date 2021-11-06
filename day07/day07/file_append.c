#include <stdio.h>

int main() {
	FILE* fout;
	fopen_s(&fout, "hello2.txt", "a"); //추가 쓰기 - "a" 모드 사용
	if (fout == NULL) {
		puts("파일을 생성할 수 없습니다.");
		return -1; //exit(-1)는 사용 안함
	}

	//fprintf(fout, "안녕하세요~\n");
	fprintf(fout, "좋은 하루 되세요~\n");

	fclose(fout);
	return 0;
}