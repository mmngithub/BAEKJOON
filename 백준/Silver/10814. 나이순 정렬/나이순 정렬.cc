#include<iostream>
#include<algorithm>
using namespace std;

class person {
public:
	int age;
	string name;
}arr[100000];

int compare(person a, person b) {
	return a.age < b.age;
}

int main() {
	int N;
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> arr[i].age >> arr[i].name;
	}

	stable_sort(arr, arr + N,compare);

	for (int i = 0; i < N; i++) {
		cout << arr[i].age << " "<< arr[i].name << "\n";
	}
}