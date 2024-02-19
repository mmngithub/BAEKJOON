#include<iostream>
#include<algorithm>
#include<vector>
#include<cmath>
int arr[8001] = { 0 };
using namespace std;
int main() {
	int N;
	cin >> N;
	vector <int> v(N);
	double sum = 0;
	for (int i = 0; i < N; i++) {
		cin >> v[i];
		sum += v[i];
		arr[v[i]+4000] +=1;
	}

	sum = round(sum / N);
	if (sum == -0) {
		sum = 0;
	}
	cout << sum << "\n";
	
	sort(v.begin(), v.end());
	int result;
	int max = *max_element(arr, arr + 8001);
	int count = 0;
	for (int i = 0; i < 8001; i++) {
		if (arr[i] == max) {
			count++;
			result = i - 4000;
		}
		if (count == 2) {
			break;
		}
	}
	int m = v[int((N-1) / 2)];
	cout << m << "\n";
	cout << result << "\n";
	cout << v[N - 1] - v[0];
}