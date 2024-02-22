#include<iostream>
#include<stack>
#include<queue>
using namespace std;
int arr[1001][1001] = { 0 };
int dvs[1001] = { 0 };
int bvs[1001] = { 0 };
int N;
void dfs(int V) {
	dvs[V] = 1;
	cout << V << " ";
	for (int i = 1; i <= N; i++) {
		if (dvs[i] == 0 && arr[V][i]==1) {
			dfs(i);
		}
	}
}
void bfs(int V) {
	queue <int> q;
	q.push(V);
	while (!q.empty()) {
		int n = q.front();
		cout << n << " ";
		q.pop();
		bvs[n] = 1;
		for (int i = 1; i <= N; i++) {
			if (bvs[i] == 0 && arr[n][i]==1) {
				q.push(i);
				bvs[i] = 1;
			}
		}
	}
}
int main() {
	int M, V;
	cin >> N >> M >> V;
	int a, b;
	for (int i = 0; i < M; i++) {
		cin >> a >> b;
		arr[a][b] = 1;
		arr[b][a] = 1;
	}
	dfs(V);
	cout << "\n";
	bfs(V);
}