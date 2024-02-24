#include<iostream>
#include<vector>
using namespace std;
vector <int> v[101];
int check[101] = { 0 };
int cnt=0;
void dfs(int x) {
	cnt++;
	check[x] = 1;
	for (int i = 0; i < v[x].size(); i++) {
		if (check[v[x][i]] == 0) {
			dfs(v[x][i]);
		}
	}
}

int main() {
	int n, m;
	cin >> n;
	cin >> m;
	for (int i = 0; i < m; i++) {
		int a, b;
		cin >> a >> b;
		v[a].push_back(b);
		v[b].push_back(a);
	}
	dfs(1);
	cout << cnt-1;
}