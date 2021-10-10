#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main() {
	//놀이공원 입장료 계산_if else if else문(미취학아동, 초딩, 중고딩, 일반인)
	//int age = 23;
	int age;
	int charge = 0;
	
	//나이별로 조건 처리
	printf("나이를 입력하세요 : ");
	scanf_s("%d", &age);
	if (age < 8) {
		printf("미취학 아동입니다.\n");
		charge = 1000;
	}
	else if (age < 14) {//(age >= 8 && age<14)
		printf("초등학생입니다.\n");
		charge = 2000;
	}
	else if (age < 20) {//(age >= 14 && age < 20)
		printf("중고등학생입니다.\n");
		charge = 2500;
	}else{//(age >= 20)
		printf("일반인입니다.\n");
		charge = 3000;
	}
	printf("입장료는 %d원입니다.\n", charge);

	//학점별로 등급 매기기



	return 0;
}