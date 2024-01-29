#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int a;
	int reversed;
	int temp;
	while (1) {
		scanf("%d", &a);
		if (a== 0){
			break;
		}
		temp = a;
		reversed = 0;
		while (temp != 0) {
			reversed = reversed * 10 + temp % 10;
			temp /= 10;
		}
		if (reversed == a) {
			printf("yes\n");
		}
		else {
			printf("no\n");
		}
	}
}