#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
int main() {
	int n;
	int result = 0;
	for (int i = 0; i < 5; i++) {
		scanf("%d", &n);
		result += n;
	}
	cout << result;
}