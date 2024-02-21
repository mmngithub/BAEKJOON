
#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
/*
int fibonacci(int n, int count0) {
    if (n == 0) {
        return ++count0;
    }
    else if (n == 1) {
        return 0;
    }
    else {
        return fibonacci(n-1,count0) + fibonacci(n-2,count0);
    }
}
int fibonacci1(int n, int count1) {
    if (n == 0) {
        return 0;
    }
    else if (n == 1) {
        return ++count1;

    }
    else {
        return fibonacci1(n - 1, count1) + fibonacci1(n - 2, count1);
    }
}
int main() {
	int T;
	cin >> T;
	for (int i = 0; i < T; i++) {
        int count0 = 0;
        int count1 = 0;
		int num;
        scanf("%d", &num); 
        cout << fibonacci(num, count0) << " " << fibonacci1(num, count1) << "\n";
	}
}
//시간초과
*/

int main() {
    int arr[41] = { 0,1,1 };
    for (int i = 3; i < 41; i++) {
        arr[i] = arr[i - 1] + arr[i - 2];
        }
    
    int T;
    cin >> T;
    for (int j = 0; j < T; j++) {
        int num; 
        cin >> num;
        if (num == 0) {
            cout << 1 << " " << 0 << "\n";
        }
        else {
            cout << arr[num - 1] << " " << arr[num] << "\n";
        }
    }
}