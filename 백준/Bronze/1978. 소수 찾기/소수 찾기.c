#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int N;
	int arr[100];
	int count;
	int total=0;
	scanf("%d", &N);
	for (int i = 0; i < N; i++) {
		count=0;
		scanf("%d", &arr[i]);
		for (int j = 2; j <= 1000; j++)
		{
			if (arr[i] % j == 0) {
				count += 1;
			}
		}
		if (count == 1) {
				total += 1;
		}
	}
	printf("%d", total);
}