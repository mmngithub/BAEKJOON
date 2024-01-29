#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int m, n;
	int b, s;
	int gcd, lcm;

	scanf("%d %d", &m, &n);

	if (m >= n) {
		b = m;
		s = n;
	}
	else {
		b = n;
		s = m;
	}
	while (b != 0) {
		if (b >= s) 
			b = b - s;
		else 
			s = s - b;
	}
	gcd = s;
	lcm = (m * n) / gcd;
	printf("%d\n%d", gcd, lcm);
}