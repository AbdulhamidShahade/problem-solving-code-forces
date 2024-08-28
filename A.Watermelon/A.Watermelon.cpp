//Author: Abdulhamid Shahade
//Created: Aug 28, 2024
//Problem Link: https://codeforces.com/problemset/problem/4/A


#include<iostream>
using namespace std;


int readNumber() {

	int number = 0x0;
	cin >> number;

	return number;
}

int main() {

	int w = readNumber();

	if (w % 2 == 0 && w != 2) {

		cout << "YES" << "\n";
	}
	else {

		cout << "NO" << "\n";
	}

	return 0;
}