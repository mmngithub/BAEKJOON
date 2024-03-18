#include<iostream>
#include<algorithm>
using namespace std;
int main() {
	int arr[1000];
	int N;
	cin >> N;
	int i = 0;
	while (N != 0) {
		arr[i] = N % 10;
		N = N / 10;
		i++;
	}
	sort(arr, arr + i, greater<>());
	for (int j = 0; j < i; j++) {
		cout << arr[j];
	}
}