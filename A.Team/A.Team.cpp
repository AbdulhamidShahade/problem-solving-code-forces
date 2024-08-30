//Author: Abdulhamid Shahade
//Created: Aug 30, 2024
//Problem Link: https://codeforces.com/problemset/problem/231/A



#include<iostream>
using namespace std;

int readNumber() {

	int number = 0;
	cin >> number;
	return number;
}

int main() {

	int n = readNumber();

	int res = 0;

	for (int i = 0; i < n; ++i) {

		int p = 0, v = 0, s = 0;

		cin >> p >> v >> s;

		if (p + v + s >= 2) {

			++res;
		}
	}

	cout << res;

	return 0;
}