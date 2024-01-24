#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	char x[1000000];
	int arr[26] = { 0 }, max = -1;
	char result;
	scanf("%s", x);

	for (int i = 0; x[i] != '\0'; i++) {
		if ('a'<=x[i] && x[i] <= 'z') {
			arr[x[i] - 'a']++;
		}
		else if('A'<=x[i]&&x[i]<='Z') {
			arr[x[i] - 'A']++;
		}
	}
	for (int i = 0; i < 26; i++) {
		if (arr[i] > max) {
			max = arr[i];
			result = i;
		}

	}
	int check = 1;

	for (int i = 0; i < 26; i++) {
		for (int j = 0; j < 26; j++) {
			if (max == arr[i]&& max==arr[j] &&i!=j) {
				check = 0;
			}
		}
	}

	if (check==1) {
		printf("%c", result+'A');
	}
	else if(check==0) {
		printf("?");
	}
}