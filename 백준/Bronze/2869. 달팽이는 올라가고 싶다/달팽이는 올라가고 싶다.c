#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int A, B, V;
	int m = 0;
	int day = 0;
	scanf("%d %d %d", &A, &B, &V);

	day = (V - B - 1) / (A - B) + 1;
	printf("%d", day);
}