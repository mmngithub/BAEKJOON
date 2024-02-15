#include<iostream>
#include<queue>
using namespace std;
int main() {
	int N;
	cin >> N;
	queue<int> q;
	for (int i = 1; i <= N; i++) {
		q.push(i);
	}
	for (int i = 1; i < N; i++) {
		q.pop();
		int f = q.front();
		q.pop();
		q.push(f);
	}
	cout << q.front();
}