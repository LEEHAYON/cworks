#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
int main() {
	//은행 업무 프로그램
	int sw = 1; //스위치변수 -실행과 중단을 구분
	int balance = 0;//잔고

	while (sw) {
		int selNO;//선택 변수
		int money;//입출금 변
		printf("====================================\n");
		printf(" 1.예금 | 2.출금 | 3.잔고 |4.종료 \n");
		printf("====================================\n");
		printf("선택> ");
		scanf_s("%d", &selNO);

		//업무처리
		//예금
		if (selNO == 1) {
			printf("예금액> ");
			scanf_s("%d", &money);
			balance += money;
		}
		else if (selNO == 2) {
			printf("출금액> ");
			scanf_s("%d", &money);
			if(money<=balance){
				balance -= money;
			}
			else {
				printf("한도 초과입니다.\n");
			}
		}
		else if (selNO == 3) {
			printf("잔고> %d\n", balance);
		}
		else if (selNO == 4) {
			sw = 0; //종료
		}
		else {
			printf("지원되지 않는 기능입니다.\n");
		}
	}//while종료
	printf("프로그램 종료");

	return 0;
}