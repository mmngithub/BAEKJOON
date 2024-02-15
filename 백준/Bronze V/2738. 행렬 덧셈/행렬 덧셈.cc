#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
int main() {
	int N, M;
	scanf("%d %d", &N, &M);
	int arr[100][100];
	int arr2[100][100];

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			scanf("%d", &arr[i][j]);
		}	
	}
	for (int i = 0; i <N; i++) {
		for (int j = 0; j < M; j++) {
			scanf("%d", &arr2[i][j]);
		}
	}
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			cout << arr[i][j] + arr2[i][j] << " ";
		}
		cout << "\n";
	}
}