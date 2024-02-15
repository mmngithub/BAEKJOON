#include<iostream>
using namespace std;
#include<stack>
int main() {
	int N;
	cin >> N;
	string w;
	for (int i = 0; i < N; i++) {
		stack <char> st;
		cin >> w;
		for (int j = 0; j < w.length(); j++) {
			if (st.empty()) {
				st.push(w[j]);
			}
			else {
				if (st.top() == '(' && w[j] == ')') {
					st.pop();
				}
				else {
					st.push(w[j]);
				}

			}
		}
		if (st.empty()) {
			cout << "YES" << "\n";
		}
		else {
			cout << "NO" << "\n";
		}
	}
}