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
			//출금액이 잔액을 초과한 경우에 "잔액을 초과했습니다. 다시 입력해주세요."
			while (sw) {
				printf("출금액> ");
				scanf_s("%d", &money);
				if (money > balance) {
					printf("잔액을 초과했습니다. 다시 입력해주세요.\n");
				}
				else {
					balance -= money;
					printf("정상 처리되었습니다.\n");
					break;
				}
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

	system("pause");

	return 0;
}