#include<iostream>
#include<algorithm>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false); cin.tie(0);
	int n, m;
	cin >> n >> m;
	int* A = new int[n];
	int* B = new int[m];
	for (int i = 0; i < n; i++) {
		cin >> A[i];
	}
	for (int i = 0; i < m; i++) {
		cin >> B[i];
	}
	int* arr = new int[n + m];
	for (int i = 0; i < n; i++) {
		arr[i] = A[i];
	}
	for (int i = 0; i < m; i++) {
		arr[n+i] = B[i];
	}
	sort(arr, arr + n + m);
	for (int i = 0; i < n + m; i++) {
		cout << arr[i] << " ";
	}
}
