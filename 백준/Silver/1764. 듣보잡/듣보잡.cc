#include<iostream>
#include<map>
#include<vector>
#include<algorithm>
using namespace std;
/*
int main() {
	int N, M;
	map <int, string> w;
	vector <string> v;
	cin >> N >> M;
	for (int i = 0; i < N; i++) {
		string s;
		cin >> s;
		w[i] = s;
	}
	int count = 0;

	for (int i = 0; i < M; i++) {
		string s;
		cin >> s;
		for (int j = 0; j < N; j++) {
			if (w[j] == s) {
				v.push_back(s);
				count++;
		
			}
		}
	}
	sort(v.begin(), v.end());
	cout << count << "\n";
	for (int i = 0; i < v.size(); i++) {
		cout << v[i] << "\n";
	}
}
*/
int main() {
	int N, M;
	map <string,int> w;
	vector <string> v;
	cin >> N >> M;
	int count = 0;
	for (int i = 0; i < N+M; i++) {
		string s;
		cin >> s;
		w[s]++;
		if (w[s] == 2) {
			count++;
			v.push_back(s);
		}
	}
	sort(v.begin(), v.end());
	cout << count << "\n";
	for (int i = 0; i < v.size(); i++) {
		cout << v[i] << "\n";
	}
}