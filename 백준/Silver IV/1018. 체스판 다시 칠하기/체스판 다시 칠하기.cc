#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
string WB[8] =
{
	"WBWBWBWB",
	"BWBWBWBW",
	"WBWBWBWB",
	"BWBWBWBW",
	"WBWBWBWB",
	"BWBWBWBW",
	"WBWBWBWB",
	"BWBWBWBW"
};
string BW[8] =
{
	"BWBWBWBW",
	"WBWBWBWB",
	"BWBWBWBW",
	"WBWBWBWB",
	"BWBWBWBW",
	"WBWBWBWB",
	"BWBWBWBW",
	"WBWBWBWB"
};
string w[50];
int WB_cnt(int x, int y){
	int cnt = 0;
	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 8; j++) {
			if (WB[i][j]!=w[i+x][j+y]) {
				cnt++;
			}
		}
	}
	return cnt;
}
int BW_cnt(int x, int y) {
	int cnt = 0;
	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 8; j++) {
			if (BW[i][j] != w[x+i][y+j]) {
				cnt++;
			}
		}
	}
	return cnt;
}
int main() {
	int N, M;
	cin >> N >> M;
	int result=64;
	int tmp;
	for (int i = 0; i < N; i++) {
		cin >> w[i];
	}
	for (int i = 0; i+8 <= N; i++) {
		for (int j = 0; j+8 <= M; j++) {
			tmp = min(WB_cnt(i, j), BW_cnt(i, j));
			if (tmp < result) {
				result = tmp;
			}
		}
	}
	cout << result;
}