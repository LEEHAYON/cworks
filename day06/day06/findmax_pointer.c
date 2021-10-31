#include <stdio.h>

int findMax(int*, int*);
int findMaxIdx(int*, int*);
int main() {
	int arr[] = { 80, 70, 60, 90, 40, 10 };
	
	//최대값 계산
	int max = findMax(arr, 6);
	printf("최대값 : %d\n", max);

	//최대값의 위치 계산
	int maxIdx = findMaxIdx(arr, 6);
	printf("최대값 위치 : %d\n", maxIdx);

	return 0;
}

int findMax(int* a, int len) {
	int maxVal = *a; //*(a + 0)
	int i;

	for (i = 1; i < len; i++) {
		if (maxVal < *(a + i))
			maxVal = *(a + i);
	}
	return maxVal;
}

int findMaxIdx(int* a, int len) {
	int maxIdx = 0; //0번 인덱스(첫 위치)_선언
	int i;

	for (i = 1; i < len; i++) {
		if (*(a + maxIdx) < *(a + i))
			maxIdx = i; //위치 변경
	}
	return maxIdx;
}