#include<iostream>
#include<queue>
using namespace std;
int main() {
	int N;
	cin >> N;
	queue<int> q;
	string w;
	int result;
	for (int i = 0; i < N; i++) {
		cin >> w;
		if (w == "push") {
			int x;
			cin >> x;
			q.push(x);
		}
		else if(w == "pop") {
			if (q.size() == 0) {
				cout << -1 << "\n";
			}
			else {
				cout << q.front() << "\n";
				q.pop();
			}
		}
		else if (w == "size") {
			cout << q.size()<<"\n";
		}
		else if (w == "empty") {
			if (q.size() == 0) {
				cout << 1 << "\n";
			}
			else {
				cout << 0 << "\n";
			}
		}
		else if (w == "front") {
			if (q.size() == 0) {
				cout << -1 << "\n";
			}
			else {
				cout << q.front() << "\n";
			}
		}
		else {
			if (q.size() == 0) {
				cout << -1 << "\n";
			}
			else {
				cout << q.back() << "\n";
			}
		}
	}
}