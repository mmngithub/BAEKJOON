#include<iostream>
#include<unordered_map>
#include<string>
using namespace std;
string w[100001];
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int N, M;
	cin >> N >> M;
	unordered_map <string, int> m;
	for (int i = 1; i <= N; i++) {
		cin >> w[i];
		m[w[i]] = i;
	}
	for (int i = 0; i < M; i++) {
		string s;
		cin >> s;
		if (isdigit(s[0])) {
			cout << w[stoi(s)] << "\n";
		}
		else {
			cout << m[s] << "\n";

		}
	}
}