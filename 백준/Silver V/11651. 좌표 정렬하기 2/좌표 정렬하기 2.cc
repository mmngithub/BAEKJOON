#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main() {
	int N; 
	vector<pair<int, int>> v;
	scanf("%d", &N);
	int x, y;
	for (int i = 0; i < N; i++) {
		scanf("%d %d", &x, &y);
		v.push_back({ y, x });
	}
	sort(v.begin(), v.end());
	for (int i = 0; i < N; i++) {
		cout << v[i].second << " "<< v[i].first << "\n";
	}
}