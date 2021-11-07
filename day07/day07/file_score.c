#include <stdio.h>

int main() {

	FILE* fp;
	char name[20];
	int kor, eng, math;

	printf("이름 입력 : ");
	fscanf_s(stdin, "%s", name, sizeof(name)); 
	//stdin은 포인터(주소)로 버퍼를 가리키며 운영체제가 제공하는 스트림
	//키보드로 입력 받을 수 있다.

	printf("국어점수 입력 : ");
	fscanf_s(stdin, "%d", &kor);

	printf("영어점수 입력 : ");
	fscanf_s(stdin, "%d", &eng);

	printf("수학점수 입력 : ");
	fscanf_s(stdin, "%d", &math);

	fopen_s(&fp, "score.txt", "w");
	if (fp == NULL) {
		puts("파일을 생성할 수 없습니다.\n");
		return -1;
	}

	fprintf(fp, "%s %d %d %d\n", name, kor, eng, math);//파일에 쓰기
	fprintf(stdout, "%s %d %d %d\n", name, kor, eng, math);//모니터에 쓰기

	fclose(fp);

	return 0;
}