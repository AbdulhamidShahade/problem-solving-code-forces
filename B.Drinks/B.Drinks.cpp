//Author: Abdulhamid Shahade
//Created: Sep 08, 2024
//Problem Link: https://codeforces.com/problemset/problem/200/B


#include<iostream>
#include<vector>
using namespace std;


int main() {

	int n = 0;
	cin >> n;

	vector<int> p(n);

	for (int i = 0; i < n; ++i) {

		cin >> p[i];
	}

	double fraction = 0.0;

	for (int i = 0; i < n; ++i) {

		fraction += (double)p[i];
	}

	cout << fraction / (double)n;

	return 0;
}