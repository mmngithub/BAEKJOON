#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#
int main() {
	int N, x;
	int flag = 0;
	int total;
	scanf("%d", &N);
	
	for (int i = 0; i < N; i++) {
		x = i;
		total = i;
		while (x > 0) {
			total += x % 10;
			x = x / 10;
		}

		if (total==N) {
			printf("%d", i);
			flag = 1;
			break;
		}
	}
	if (flag == 0) {
		printf("0");
	}
}