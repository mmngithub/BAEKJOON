#include<iostream>
using namespace std;
int main() {
	int n;
	cin >> n;
	int count[1001] = { 0 };
	count[1] = 1;
	count[2] = 3;
	for (int i = 3; i <= n; i++) {
		count[i] = (count[i - 1] + count[i - 2] * 2) % 10007;
	}
	cout << count[n];
}