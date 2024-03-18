#include<iostream>
#include<algorithm>
using namespace std;
int main() {
	int sum = 0;
	int arr[8];
	int result[8];
	for (int i = 0; i < 8; i++) {
		cin >> arr[i];
		result[i] = arr[i];	
	}
	sort(result, result + 8);
	for (int i = 3; i < 8; i++) {
		sum += result[i];
	}
	cout << sum << "\n";
	for (int j = 0; j < 8; j++) {
		for (int i = 3; i < 8; i++) {
			if (result[i] == arr[j]) {
				cout << j+1 << " ";

			}
		}
	}
}