#include<iostream>
using namespace std;
int arr[129][129];
int w = 0;
int b = 0;
void check(int x, int y, int N) {
	int cut = 0;
	int first_color = arr[x][y];
	for (int i = x; i < x + N; i++) {
		for (int j = y; j < y + N; j++) {
			if (arr[i][j] != first_color) {
				cut = 1;
				break;
			}
		}
	}
	if (cut) {
		check(x, y, N / 2);
		check(x, y + N / 2, N / 2);
		check(x + N / 2, y, N / 2);
		check(x + N / 2, y + N / 2, N / 2);
	}
	else {
		if (first_color == 0) {
			w++;
		}
		else {
			b++;
		}
	}
}
int main() {
	int N;
	cin >> N;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			cin >> arr[i][j];
		}
	}
	check(0, 0, N);
	cout << w << "\n" << b;
}