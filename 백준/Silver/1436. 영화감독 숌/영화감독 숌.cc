#include <iostream>
#include<string>
#include<algorithm>
using namespace std;

int main() {
	int N;
	string result;
	int count = 0;
	cin >> N;

	for (int i = 0;; i++) {
		result = to_string(i);
		if (result.find("666")!= string::npos) {
			count++;
		}
		if (count == N) {
			cout << result;
			break;
		}
	}
}