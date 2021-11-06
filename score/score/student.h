//students.h

typedef struct _Score { //구조체 가명
	int math;
	int eng;
	double avg;
} Score; //구조체 실명

typedef struct _Students {
	int number;
	char name[20];
	Score score; //Score자료형을 참조
} Student;
