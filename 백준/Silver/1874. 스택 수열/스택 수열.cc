#include<iostream>
#include<stack>
#include<vector>
using namespace std;
int main() {
	int n;
	cin >> n;
	stack <int> s;
	vector <char> v;
	int num;
	int cnt = 1;
	for (int i = 0; i < n; i++) {
		cin >> num;
		while (cnt <= num) {
			s.push(cnt);
			v.push_back('+');
			cnt++;
		}
		if (s.top() == num) {
			s.pop();
			v.push_back('-');
		}
		else {
			cout << "NO";
			return 0;
		}
	}
	for (int i = 0; i < v.size(); i++) {
		cout << v[i] << "\n";
	}
}