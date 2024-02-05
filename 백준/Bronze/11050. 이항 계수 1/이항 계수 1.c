#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int combination(int n, int r) {
	if (r == 0) {
		return 1;
	}
	else {
		return n * combination(n - 1, r - 1) / r;
	}
}
int main() {
	int n, r;
	scanf("%d %d", &n, &r);
	int result = combination(n, r);
	printf("%d", result);
}