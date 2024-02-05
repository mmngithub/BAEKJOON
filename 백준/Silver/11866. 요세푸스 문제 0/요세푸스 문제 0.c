#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int n, k;
	int arr[1000] = { 0 };
	scanf("%d %d", &n, &k);
	int count = 0;
	printf("<");
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < k; j++) {
			count++;
			if (count > n) {
				count = 1;
			}	
			while(1){
				if (arr[count] == 1) {
					count++;
				}
				else if (count > n) {
					count = 1;
				}
				else {
					break;
				}
			}
		}
		printf("%d", count);
		if (i+1 != n) {
			printf(", ");
		}
		arr[count] = 1;
	}
	printf(">");
}