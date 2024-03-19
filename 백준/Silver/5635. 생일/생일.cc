#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main() {
	int N;
	cin >> N;
	vector<pair<pair<int, int>, pair<int, string>>> v(N);
	for (int i = 0; i < N; i++) {
		string name;
		int d, m, y;
		cin >> name >> d >> m >> y;
		v[i].first.first = y;
		v[i].first.second = m;
		v[i].second.first = d;
		v[i].second.second = name;
	}
	sort(v.begin(), v.end());
	cout << v[N - 1].second.second << "\n";
	cout << v[0].second.second;
}