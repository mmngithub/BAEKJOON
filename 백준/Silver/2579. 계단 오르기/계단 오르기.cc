#include<iostream>
#include<algorithm>
using namespace std;
int main() {
	int n;
	cin >> n;
	int arr[301] = { 0 };
	int cnt[301] = { 0 };
	for (int i = 1; i <= n; i++) {
		cin >> arr[i];
	}
	cnt[1] = arr[1];
	cnt[2] = arr[1] + arr[2];
	cnt[3] = max(arr[1], arr[2]) + arr[3];
	for (int i = 4; i <= n; i++) {
		cnt[i] = arr[i] + max(cnt[i - 2], cnt[i - 3] + arr[i - 1]);
	}

	cout << cnt[n];

}