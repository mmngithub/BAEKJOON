#include<iostream>
using namespace std;
int arr[1001][1001] = { 0 };
int check[1001] = { 0 };
int cnt = 0;
int N;
void dfs(int x) {
	for (int i = 1; i <= N; i++) {
		if (check[i] == 0 && (arr[x][i] == 1 || arr[i][x] == 1)) {
			check[i] = 1;
			dfs(i);
		}
	}
}

int main() {
	int M;
	cin >> N >> M;
	for (int i = 0; i < M; i++) {
		int u, v;
		cin >> u >> v;
		arr[u][v] = 1;
		arr[v][u] = 1;
	}
	for (int i = 1; i <= N; i++) {
		if (check[i] == 0) {
			dfs(i);
			cnt++;
		}
	}
	cout << cnt;
}
