#include <stdio.h>

int main() {
	FILE* fout;
	int i, j;

	fopen_s(&fout, "gugudan.txt", "w");
	if (fout == NULL) {
		puts("파일을 생성할 수 없습니다.");
		return -1; //exit(-1)는 사용 안함
	}

	//구구단 쓰기
	for (i = 2; i < 10; i++) {
		for (j = 1; j < 10; j++) {
			fprintf(fout,"%d x %d = %d\n", i, j, (i*j));
		}
		fprintf(fout, "\n");
	}

	fclose(fout);

	return 0;
}