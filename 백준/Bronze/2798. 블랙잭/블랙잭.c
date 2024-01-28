#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int N, M;
	int arr[100];
	int max = 0;
	scanf("%d %d", &N, &M);
	for (int i = 0; i < N; i++) {
		scanf("%d", &arr[i]);
	}
	for (int i = 0; i < N; i++) {
		for(int j=1; j<N-1; j++){
			for(int k=2; k<N-2; k++){
				int total = arr[i] + arr[j] + arr[k];
				if (total > max && total <= M && i != j&&j!=k&&k!=i) {
					max = arr[i] + arr[j] + arr[k];
				}
			}
		}
	}
	printf("%d", max);
}