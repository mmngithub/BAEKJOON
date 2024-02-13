#include<iostream>
#include<stack>
using namespace std;
int main() {
	int N; 
	cin >> N;
	stack<int> st;
	string w;
	int result = 0;
	for (int i = 0; i < N; i++){
		cin >> w;
		if (w == "push") {
			int p;
			cin >> p;
			st.push(p);
		}
		else if (w == "pop") {
			if (st.size()==0) {
				cout << -1 << "\n";
			}
			else {
				result = st.top();
				cout << result<<"\n";
				st.pop();
			}
		}
		else if (w == "size") {
			result = st.size();
			cout << result<<"\n";
		}
		else if (w == "empty") {
			if (st.size() == 0) {
				cout << 1 << "\n";
			}
			else
				cout << 0 << "\n";
		}
		else {
			if (w == "top") {
				if(st.size()==0){
					cout << -1 << "\n";
				}
				else {
					result = st.top();
					cout << result << "\n";
				}
			}
		}

	}
}