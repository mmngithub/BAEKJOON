#include<iostream>
using namespace std;
int main() {
	int t;
	cin >> t;
	int count[11] = { 0 };
	count[1] = 1;
	count[2] = 2;
	count[3] = 4;
	for (int i = 4; i < 11; i++) {
		count[i] = count[i - 1] + count[i - 2] + count[i - 3];
	}

	for (int i = 0; i < t; i++) {
		int num;
		cin >> num;
		cout << count[num] << "\n";
	}
}