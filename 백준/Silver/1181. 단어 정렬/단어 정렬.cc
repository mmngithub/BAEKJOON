#include <iostream>
#include<string>
#include<algorithm>
using namespace std;

int compare(string a, string b) {
	if (a.length() == b.length()) {
		return a < b; // 문자열 a가 문자열 b 보다 사전순으로 앞에 오는지 확인하는 조건임. 그냥 암기하기!
	}
	else {
		return a.length() < b.length(); 
	}
} // 주로 정렬 알고리즘에서 사용되는 방법이니깐 기억해두기.


int main() {
	int N;
	string arr[20000];

	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> arr[i];
	}
	sort(arr, arr + N, compare);

	for (int i = 0; i < N; i++) {
		if (arr[i] == arr[i + 1]) {
			continue;
		}
		cout << arr[i] << endl;
	}
}
