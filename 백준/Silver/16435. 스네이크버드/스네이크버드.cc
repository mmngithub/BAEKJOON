#include<iostream>
#include<algorithm>
using namespace std;
int main() {
	int N, L;
	cin >> N  >>L;
	int arr[10000];
	for (int i = 0; i < N; i++) {
		cin >> arr[i];
	}
	int cnt = L;
	sort(arr, arr + N);
	for (int i = 0; i < N; i++) {
		if (arr[i] <= L) {
			L++;
			cnt++;
		}
		else {
			break;
		}
	}
	cout << cnt;
}