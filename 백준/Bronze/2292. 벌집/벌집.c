#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int N;
	int count = 1;
	scanf("%d", &N);
	for (int i = 1; 6*i-4 <= N; i+=count-1) {
			count += 1;	
	}
	printf("%d", count);
}