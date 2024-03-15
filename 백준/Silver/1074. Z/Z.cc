#include<iostream>
using namespace std;
int cnt = 0;
int r, c;
void recursion(int N,int x,int y) {
	if (x == c && y == r) {
		cout << cnt;
		return;
	}
	else if (x <= c && y <= r && c < x + N && r < y + N) {
		recursion(N / 2, x, y);
		recursion(N / 2, x + N / 2, y);
		recursion(N / 2, x, y + N / 2);
		recursion(N / 2, x + N / 2, y + N / 2);
	}
	else {
		cnt += N * N;
	}
}
int main() {
	int N;
	cin >> N >> r >> c;
	recursion((1 << N), 0, 0);
}