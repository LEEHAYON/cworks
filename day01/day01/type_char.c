#include <stdio.h>

int main() {
	//���� �ڷ���
	char ch = 'a'; //������ ���� ch�� �����ϰ�, 'a'�� ����
	printf("%c\n", ch);//��� �� : a
	printf("%d\n", ch);//�ƽ�Ű �ڵ尪�� ���ڴ�.

	//�ڷ����� ũ��
	printf("char �� = %dByte\n", sizeof(char)); //1byte

	ch = 98;
	printf("%c\n", ch);//��� �� : b
	printf("%c\n", ch + 1);//��� �� : c
	printf("%d\n", ch);//��� �� : 98(�ƽ�Ű �ڵ� ��)

	//���� ���ڿ��� �ѱ��� �迭�� ǥ��
	char f[7] = "banana";//�迭, ���ڿ��� �ֵ���ǥ�� ���Ѵ�.(�ڿ� '\0', null�� ���� �־ ���� ���� ���� 1���ؼ� []�� ����
	char h[3] = "��";
	char h2[] = "\uD55C";//�����ڵ�
	char h3[] = "\uAE00";//�����ڵ�

	printf("%s\n", f);
	printf("%s\n", h);
	printf("%s", h2);//��� �� : ��
	printf("%s\n", h3);//��� �� : ��

	return 0;
}