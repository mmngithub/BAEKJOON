#include<iostream>
#include<unordered_map>
using namespace std;
int main() {
	int t;
	cin >> t;
	for (int i = 0; i < t; i++) {
		int n;
		cin >> n;
		int cnt = 1;
		unordered_map <string, int> m;
		for (int j = 0; j < n; j++) {
			string x, y;
			cin >> x;
			cin >> y;
			m[y]++;
		}
		for (auto i : m) {
			cnt *= i.second + 1;
		}
		cout << cnt - 1 << "\n";
	}
}
