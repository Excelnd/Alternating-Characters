// Alternating Characters.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int getNumDeletion(string &str) {
	int count = 0;
	for (int i = 0; i < str.size() - 1; i++) {
		if (str[i] == str[i + 1]) count++;
	}
	return count;
}

int main()
{
	int t;
	cin >> t;
	string str;
	while (t--) {
		cin >> str;
		cout << getNumDeletion(str) << endl;
	}

    return 0;
}

