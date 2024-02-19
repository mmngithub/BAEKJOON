#include<iostream>
#include<stack>
#include<string>
//#include<stdio.h>
using namespace std;
int main() {
	string n;
	while(1) {
		getline(cin, n);
		if (n[0] == '.') {
			return 0;
		}
		stack <char> s;
		for (int i = 0; i < n.length(); i++) {
			
			if (n[i] == '(') {
				s.push('(');
			}
			else if (n[i] == '[') {
				s.push('[');
			}
			else if (n[i] == ')') {
				if (!s.empty() && s.top() == '(') {
					s.pop();
				}
				else {
					cout << "no"<< "\n";
					break;
				}
			}
			else if (n[i] == ']') {
				if (!s.empty() && s.top() == '[') {
					s.pop();
				}
				else {
					cout << "no" << "\n";
					break;
				}
			}	
			if (s.empty() && i == n.length() - 1) {
				cout << "yes" << "\n";
			}
			else if (!s.empty() && i == n.length() - 1) {
				cout << "no"<< "\n";
			}
		}	
	} 
}