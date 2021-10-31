#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>


//struct 구조체 자료형 정의
struct Student {
	int number; //학생의 번호(멤버_성질 변수 - 초기화 하지 않음_직접 숫자를 넣지 않음, 선언만 함)
	char name[20]; //이름
	double weight; //몸무게
};


int main() {
	struct Student s1; //s1은 객체 변수(힙 영역 사용)
	s1.number = 101;
	//s1.name = "강하늘";
	strcpy(s1.name, "강하늘");
	s1.weight = 62.3;

	printf("학번 : %d\n ", s1.number);
	printf("이름 : %s\n", s1.name);
	printf("몸무게 : %3.1lf\n",s1.weight);

	//s2 생성하기
	struct Student s2; //s1은 객체 변수(힙 영역 사용)
	s2.number = 102;
	strcpy(s2.name, "이채연");
	s2.weight = 59.8;

	printf("학번 : %d\n ", s2.number);
	printf("이름 : %s\n", s2.name);
	printf("몸무게 : %3.1lf\n", s2.weight);

	return 0;
}