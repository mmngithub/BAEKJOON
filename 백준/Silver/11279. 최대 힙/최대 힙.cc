#include<iostream>
#include<queue>
#include<algorithm>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n;
	cin >> n;
	priority_queue<int> q;
	for (int i = 0; i < n; i++) {
		int x;
		cin >> x;
		if (x == 0 && q.empty()) {
			cout << 0 << "\n";
		}
		else if (x == 0 && !q.empty()) {
			cout << q.top() << "\n";
			q.pop();
		}
		else {
			q.push(x);
		}
	}
}