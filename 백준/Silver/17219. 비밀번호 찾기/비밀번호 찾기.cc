#include<iostream>
#include<unordered_map>
using namespace std;
int main() {
	cin.tie(NULL);
	ios::sync_with_stdio(false);
	int N, M;
	unordered_map <string,string> w;
	string k,v;
	cin >> N >> M;
	for (int i = 0; i < N; i++) {
		cin >> k >> v;
		w[k] = v;
	}
	for (int i = 0; i < M; i++) {
		cin >> k;
		cout << w[k] << "\n";
	}
}