#include<iostream>
#include<algorithm>
using namespace std;
int main() {
	int N;
	cin >> N;
	int A[100];
	int B[100];
	for (int i = 0; i < N; i++) {
		cin >> A[i];
	}
	for (int i = 0; i < N; i++) {
		cin >> B[i];
	}
	int sum = 0;
	sort(A, A + N);
	sort(B, B + N, greater<>());
	for (int i = 0; i < N; i++) {
		sum += A[i] * B[i];
	}
	cout << sum;
}