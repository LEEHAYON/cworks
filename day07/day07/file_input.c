#include <stdio.h>

int main() {
	FILE* fp;
	fopen_s(&fp, "hello.txt", "r");// �б� ��� - "r", "rt"�� ��밡��
	if (fp == NULL) { //����ó�� �ʼ�
		puts("������ �� �� �����ϴ�.");  //puts("���ڿ�") - ���ڿ��� �ְ� ������
		return -1; //������ �߻������� ����
	}
	int ch = 0;


	/*while (1) {
		int ch = fgetc(fp);   //fgetc - �� ���ھ� ��������
		if (ch == EOF) break; //EOF(End Of File) = -1
		//putchar(ch);          //putchar - �� ���ھ� ���
		printf("%c", ch);
	 }*/

	while ((ch==fgetc(fp))!=EOF){
		putchar(ch);
	}

	fclose(fp);

	return 0;
}