#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int N;
	int arr[1000];
	float max = 0;
	float total = 0;
	scanf("%d", &N);

	for (int i = 0; i < N; i++) {
		scanf("%d", &arr[i]);
		if (arr[i] > max) {
			max = arr[i];
		}
	}
	for (int i = 0; i < N; i++) {
		total += arr[i] / max * 100;
	}
	total = total / N;
	printf("%f", total);
}