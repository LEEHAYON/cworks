#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main() {
	//���� �迭 ����� ���
	char alphabet[26];
	char ch = 'A';
	int i;

	//'A' ���
	printf("%c %d\n", ch, ch);
	printf("%c %d\n", ch+1, ch+1);

	//�迭�� ����
	for (i = 0; i < 26; i++) {
		alphabet[i] = ch;
		ch++;
	}

	//��ü ���
	for (i = 0; i < 26; i++) {
		printf("%c �ƽ�Ű�ڵ� �� : %d\n", alphabet[i], alphabet[i]);
	}

	return 0;
}