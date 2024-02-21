#include <iostream>
#include<algorithm>
using namespace std;
int arr[500][500];
int main() {
	int N, M, B;
	cin >> N >> M >> B;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			cin >> arr[i][j];
		}
	}
	int result = 0;
	int time = 0;
	int min = 2147483647;
	for (int h = 0; h <= 256; h++) {
		int remove = 0;
		int build = 0;
		for (int i = 0; i < N; i++) {
			for (int j = 0; j < M; j++) {
				int height = arr[i][j] - h;
				if (height > 0) {
					remove += height;
				}
				else {
					build -= height;
				}
			}
		}
		if (B + remove >= build) {
			time = remove * 2 + build;
			if (min >= time) {
				min = time;
				result = h;
			}
		}
	}
	cout << min << " " << result;
}