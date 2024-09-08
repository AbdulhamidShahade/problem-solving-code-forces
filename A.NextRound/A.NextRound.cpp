//Author: Abdulhamid Shahade
//Created: Sep 8, 2024
//Problem Link: https://codeforces.com/problemset/problem/158/A


#include<iostream>
#include<vector>
using namespace std;


int main() {

	int n = 0, k = 0;
	cin >> n >> k;

	vector<int> a(n);

	for (int i = 0; i < n; ++i) {

		cin >> a[i];
	}

	int pass = 0;

	for (int i = 0; i < n; ++i) {

		if (a[i] >= a[k - 1] && a[i] != 0) {
			
			++pass;
		}
	}

	cout << pass;

	return 0;
}