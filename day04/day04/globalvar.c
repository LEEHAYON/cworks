#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

void price();
int quantity = 2; //���� ����

int main() {

	printf("%d����\n",quantity);
	price();

	return 0;
}

void price() {
	int price = 10000 * quantity;
	printf("%d���Դϴ�.\n", price);
}