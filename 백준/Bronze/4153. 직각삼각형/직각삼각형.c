#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int a = 1, b = 1, c = 1;
	while (a != 0 && b != 0 && c != 0) {
		scanf("%d %d %d", &a, &b, &c);
		if (a == 0 && b == 0 && c == 0) break;
		if ((a * a + b * b == c * c) || (b * b == a * a + c * c) || (a * a == b * b + c * c)) {
			printf("right\n");
		}
		else {
			printf("wrong\n");
		}
	}
}