//Author: Abdulhamid Shahade
//Created: Aug 29, 2024
//Problem Link: https://codeforces.com/problemset/problem/71/A


#include<iostream>
using namespace std;

int readNumber() {

	int number = 0x0;
	cin >> number;

	return number;
}

int main() {

	int n = readNumber();

	for (int i = 0; i < n; ++i) {

		string str = "";
		cin >> str;

		int len = str.size();

		if (len <= 10) {

			cout << str << "\n";
		}
		else {

			cout << str[0] << len - 2 << str[len - 1] << "\n";
		}
	}

	return 0;
}