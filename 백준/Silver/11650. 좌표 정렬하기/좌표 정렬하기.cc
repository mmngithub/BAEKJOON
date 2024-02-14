#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main() {
	int N;
	cin >> N;
	vector <pair < int, int >> v;
	int x, y;
	for (int i = 0; i < N; i++) {
		cin >> x >> y;
		v.push_back({ x,y });
	}
	sort(v.begin(), v.end());
	
	for (int i = 0; i < N; i++) {
		cout << v[i].first << " " << v[i].second << "\n";
	}
}