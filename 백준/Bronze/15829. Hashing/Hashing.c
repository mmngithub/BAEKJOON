#define _CRT_SECURE_NO_WARNINGS
#include<math.h>
#include<stdio.h>
int main() {
	int L;
	char arr[50];
	int total = 0;
	scanf("%d", &L);
	for (int i = 0; i < L; i++) {
		scanf(" %c", &arr[i]);
	}
	for (int i = 0; i < L; i++) {
		total+=((int)(arr[i])-'a'+1) * (pow(31, i));
	}
	printf("%d", total);
}