#include<iostream>
#include<algorithm>
#include<vector>
int arr[1000001];
using namespace std;
int main() {
	ios_base::sync_with_stdio(false); cin.tie(0);
	int N;
	cin >> N;
	vector <int> v(N);
	for (int i = 0; i < N; i++) {
		cin >> arr[i];
		v[i] = arr[i];
	}
	sort(v.begin(), v.end());
	v.erase(unique(v.begin(), v.end()), v.end());
	for (int i = 0; i < N; i++) {
		int cnt = lower_bound(v.begin(), v.end(), arr[i])-v.begin();
		cout << cnt<< " ";
	}
}