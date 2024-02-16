#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
int main() {
	int N;
	scanf("%d", &N);
	int cnt = 0;
	while (N >= 0){
		if (N % 5 == 0) {
			cnt += (N /5);
			N -= 5;
			cout << cnt <<"\n";
			return 0;
		}
			N -= 3;
			cnt++;
	}
		cout << -1;
}