#include<iostream>
#include<queue>
#include<algorithm>
using namespace std;
int main() {
	int N;
	int num, M;
	int impot;
	cin >> N;
	for (int i = 0; i < N; i++) {
		int count = 0;
		cin >> num >> M;

		queue <pair<int, int>> qp;
		priority_queue <int> q;

		for (int j = 0; j < num; j++) {
			cin >> impot;
			qp.push({ j,impot });
			q.push(impot);
		}
		while (!qp.empty()) {
			int l = qp.front().first;
			int v = qp.front().second;
			qp.pop();
			if (v == q.top()) {
				count++;
				q.pop();
				if (M == l) {
					cout << count << "\n";
					break;
				}
			}
			else {
				qp.push({ l,v });
			}
		}
	}
}