#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<algorithm>
using namespace std;
int v[10000];
int main() {
	int k, n;
	cin >> k >> n;
	for (int i = 0; i < k; i++) {
		cin >> v[i];
	}
	int result = 0;
	long long start = 1;
	long long end = *max_element(v, v + k);
	while (start <= end) {
		int count = 0;
		long long mid = (start + end) / 2;
		for (int i = 0; i < k; i++) {
			count += v[i]/mid;
		}
		if (count >= n) {
			start = mid + 1;			
			result = mid;			
		}
		else {
			end = mid -1;
		}
	}
	cout << result;
}