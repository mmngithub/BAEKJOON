#include<iostream>
using namespace std;
int cnt = 0;

void out(int N, int from, int to, int aux){	
	if (N <= 0) return;
	out(N - 1, from, aux, to);
	cnt++;
	out(N - 1, aux, to, from);	
}

void hanoi(int N, int from, int to, int aux) {
	if (N <= 0) return;
	hanoi(N - 1, from, aux, to);
	cout << from << " " << to << "\n";
	hanoi(N - 1, aux, to, from);
}

int main() {
	int N;
	cin >> N;
	out(N, 1, 3, 2);
	cout << cnt << "\n";
	hanoi(N, 1, 3, 2);
}