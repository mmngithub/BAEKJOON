#include<iostream>
using namespace std;
#include <deque>
int main() {
	int N;
	cin >> N;
	deque<int> dp;
	string w;
	for (int i = 0; i < N; i++) {
		cin >> w;
		if (w == "push_front") {
			int x;
			cin >> x;
			dp.push_front(x);
		}
		else if (w == "push_back") {
			int y;
			cin >> y;
			dp.push_back(y);
		}
		else if (w == "pop_front") {
			if (dp.empty()) {
				cout << -1 << "\n";
			}
			else {
				cout << dp.front() << "\n";
				dp.pop_front();
			}
		}
		else if (w == "pop_back") {
			if (dp.empty()) {
				cout << -1 << "\n";
			}
			else {
				cout << dp.back() << "\n";
				dp.pop_back();
			}
		}
		else if (w == "size") {
			cout << dp.size()<<"\n";
		}
		else if (w == "empty") {
				cout << dp.empty() << "\n";	
		}
		else if (w == "front") {
			if (dp.empty()) {
				cout << -1 << "\n";
			}
			else {
				cout << dp.front() << "\n";
			}
		}
		else {
			if (dp.empty()) {
				cout << -1 << "\n";
			}
			else {
				cout << dp.back() << "\n";
			}
		}	
	}
}