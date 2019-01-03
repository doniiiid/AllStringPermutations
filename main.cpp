// main.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

void permutate(string a, int i, int n);

int main()
{
	string s;
	cout << "Please enter string: ";
	cin >> s;
	cout << endl;
	permutate(s, 0 , s.length());
	system("pause");
    return 0;
}

void permutate(string a, int i, int n) {
	if (i == n - 1) {
		cout << a << endl;
		return;
	}
	else {
		for (int j = 1; j < n; j++) {
			swap(a[i], a[j]);
			permutate(a, i + 1, n);
			swap(a[i], a[j]);
		}

	}

}