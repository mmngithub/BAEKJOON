#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main() {
	int N, K;
	cin >> N >> K;
	vector<int> c(N);
	for (int i = 0; i < N; i++) {
		cin >> c[i];
	}
	int result = 0;
	int count = 0;
	
	while (result < K) {
		if (c[N - 1] <= K) {
			while (result + c[N - 1] <= K) {
				result += c[N - 1];
				count++;
			}
		}
		N--;
	}
	cout << count;
}