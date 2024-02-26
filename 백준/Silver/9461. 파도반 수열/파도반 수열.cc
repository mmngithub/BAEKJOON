#include<iostream>
using namespace std;
int main() {
	int t;
	cin >> t;
	long long int cnt[101] = { 0 };
	cnt[1] = 1;
	cnt[2] = 1;
	cnt[3] = 1;
	cnt[4] = 2;
	cnt[5] = 2;
	for (int j = 6; j < 101; j++) {
		cnt[j] = cnt[j - 5] + cnt[j - 1];
	}
	for (int i = 0; i < t; i++) {
		int n;
		cin >> n;
		cout << cnt[n] << "\n";
	}
}