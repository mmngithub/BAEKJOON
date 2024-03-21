#include<iostream>
#include<algorithm>
using namespace std;
int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int T;
	cin >> T;
	for (int i = 0; i < T; i++) {
		int N;
		cin >> N;
		int arr[11] = { 0 };
		int cnt = 0;
		while (N != 0) {
			if (arr[N % 10] == 0) {
				arr[N % 10] = 1;
			}
			N /= 10;
		}
		
		for (int j = 0; j < 11; j++) {
			if (arr[j] == 1) {
				cnt++;
			}
		}
		cout << cnt << "\n";
	}
}