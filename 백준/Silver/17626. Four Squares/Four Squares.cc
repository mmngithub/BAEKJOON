#include<iostream>
#include<algorithm>
using namespace std;
int cnt[50001];
int main() {
	int n;
	cin >> n;
	cnt[1] = 1;
	for (int i = 2; i <= n; i++) {
		cnt[i] = cnt[i - 1] + 1;
		for (int j = 1; j*j <= i; j++) {
			cnt[i] = min(cnt[i - j * j] + 1, cnt[i]);
		}	
	}
	cout << cnt[n];
}