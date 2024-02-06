#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int T;
	int n, k;
	int arr[15][15] = { 0 };
	int count = 0;
	scanf("%d", &T);
	for (int i = 0; i < T; i++) {
		scanf("%d\n%d", &n, &k);

		for (int j = 0; j < n; j++) {
			for (int p = 0; p < k; p++) {
				arr[0][p + 1] = p + 1;
				arr[j+1][p + 1] = arr[j+1][p] + arr[j][p+1];
			}
		}
		printf("%d\n", arr[n][k]);
	}
}