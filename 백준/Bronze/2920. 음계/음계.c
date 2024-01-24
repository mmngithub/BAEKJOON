#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int x[8];
	int count = 0;
	for (int i = 0; i < 8; i++) {
		scanf("%d", &x[i]);
	}
	for (int i = 0; i < 8; i++) {
		if (x[i] == i+1) {
			count += 1;
		}
		else if (x[i] == 8-i) {
			count -= 1;
		}
	}
	if (8 == count) {
		printf("ascending");
	}
	else if (-8==count) {
		printf("descending");
	}
	else {
		printf("mixed");
	}
}