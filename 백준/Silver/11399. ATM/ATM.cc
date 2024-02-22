#include<iostream>
#include<algorithm>
using namespace std;
int main() {
	int N;
	int arr[1000];
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> arr[i];
	}
	sort(arr, arr + N);
	int result = 0;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j <= i; j++) {
			result += arr[j];
		}
	}
	cout << result;
}