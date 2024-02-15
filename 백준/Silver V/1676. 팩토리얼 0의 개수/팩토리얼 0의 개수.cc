#include<iostream>
using namespace std;
int main() {
	int N;
	cin >> N;
	int cnt;
	int temp;
	int cnt_2 = 0;
	int cnt_5 = 0;
	for (int i = 2; i <= N; i++) {
		temp = i;	
		while (temp % 2 == 0) {
				cnt_2++;
				temp /= 2;
		}
		while (temp % 5 == 0) {
				cnt_5++;
				temp /= 5;
		}
		
	}
	cnt = min(cnt_2, cnt_5);
	cout << cnt;
}
