#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
void sayHello();//������Ÿ��(���ߴ� ��)_ ���� : �ڷ��� �Լ��̸�()
void sayHello2(char[]);//������Ÿ��(���ߴ� ��)_ ���� : �ڷ��� �Լ��̸�()

int main() {
	

	sayHello(); //�Լ� ȣ��
	sayHello2("C++"); //�Լ� ȣ��
	sayHello2("Python");

	return 0;
}

//void�� ��ȯ �ڷ�(return)�� ���� ��
void sayHello() {//sayHello��� �̸��� �Լ� ����
	printf("Hello~ C!\n");
}

void sayHello2(char lang[]){
	printf("Hello~ %s\n", lang);
}
