#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<algorithm>
using namespace std;
int num[500000];
int main() {
	int N;
	scanf("%d", &N);
	for (int i = 0; i < N; i++) {
		scanf("%d", &num[i]);
	}
	sort(num, num + N);
	int M;
	scanf("%d", &M);
	int num2;
	for (int i = 0; i < M; i++) {
		scanf("%d", &num2);
		cout << upper_bound(num,num+N,num2)- lower_bound(num, num + N, num2) << " ";
	}
}