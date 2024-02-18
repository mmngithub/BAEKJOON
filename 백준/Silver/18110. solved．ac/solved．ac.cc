#include<iostream>
#include<algorithm>
using namespace std;
int main() {
	int n;
	int arr[300000];
	float sum=0;
	cin >> n;
	if (n == 0) {
		cout << 0 << "\n";
		return 0;
	}
	for (int i= 0; i < n; i++) {
		cin >> arr[i];		
	}
	int m = (n * 0.15) + 0.5;
	sort(arr, arr + n);
	for (int j = m; j < n - m; j++) {
		sum += arr[j];
	}
	float result = (sum / (n - 2 * m));
	cout << int(result+0.5);
}