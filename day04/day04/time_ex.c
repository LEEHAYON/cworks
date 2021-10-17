#include <stdio.h>
#include <Windows.h>
#define _CRT_SECURE_NO_WARNINGS

int main() {

	//time_t t = time(NULL); //time_t 시간 자료형
	time_t t, start, end;
	
	t = time(NULL);
	int i;

	printf("%ld초\n", t); //%d, %ld
	//1634441658초, 1970. 1. 1 자정이후 현재까지 시간

	//1부터 10까지 출력(대기 시간을 도입) - 수행 시간 측정
	//Sleep(1000) -> 1초 <Windows.h> 필요
	start = time(NULL); //시작 시간

	for (i = 1; i <=20; i++) {
		printf("%d\n", i);
		Sleep(50);//0.05초
	}

	end = time(NULL);

	//double diff_timer = difftime(end, start);
	double diff_timer = (double)(end-start); //형변환
	printf("수행시간 : %1f초\n", diff_timer);

	return 0;
}