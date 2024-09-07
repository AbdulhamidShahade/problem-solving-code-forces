//Author: Abdulhamid Shahade
//Created: Sep 7, 2024
//Problem Link: https://codeforces.com/problemset/problem/282/A


#include<iostream>
using namespace std;

int main() {

	int x = 0;
	int n = 0;
	cin >> n;

	for (int i = 0; i < n; ++i) {

		string statement = "";
		cin >> statement;

		if (statement[0] == '+' || statement[1] == '+') {
			
			++x;
		}
		else {

			--x;
		}
	}

	cout << x;

	return 0;
}