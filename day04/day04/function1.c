#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
void sayHello();//프로토타입(본뜨는 것)_ 형식 : 자료형 함수이름()
void sayHello2(char[]);//프로토타입(본뜨는 것)_ 형식 : 자료형 함수이름()

int main() {
	

	sayHello(); //함수 호출
	sayHello2("C++"); //함수 호출
	sayHello2("Python");

	return 0;
}

//void란 반환 자료(return)가 없는 것
void sayHello() {//sayHello라는 이름의 함수 정의
	printf("Hello~ C!\n");
}

void sayHello2(char lang[]){
	printf("Hello~ %s\n", lang);
}
