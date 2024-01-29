#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int N;
	int arr[10001] = { 0 };
	int temp;
	int num;
	scanf("%d", &N);

	for (int i = 0; i < N; i++) {
		scanf("%d", &num);
		arr[num] += 1;
 	}

	for (int i = 1; i < 10001; i++) {
		for (int j = 0; j < arr[i]; j++) {

			printf("%d\n", i);
		}
	}
}