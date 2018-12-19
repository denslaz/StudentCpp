﻿#include "pch.h"
#include <iostream>
#include <string>
#include <stdlib.h>
using namespace std;

 int main()
{
	cout << "Input constants:" << endl;
	char s[100]; double massconst[1000]; char massoper[1000]; int i = 0;
	for (i; i < 1000; i++) {
		cin >> s;
		if ((s[0] == 'e') && (s[1] == 'n') && (s[2] == 'd') && (s[3] == '\0')) {
			break;
		}
		else { 
			if (cin.fail()) {
				cin.clear();
				cin.ignore(cin.rdbuf()->in_avail());
				cout << "You wrote a wrong number, please retry!";
			}
			else {
				double n = atof(s);
				massconst[i] = n;
			}
		}
	}
	cout << "Input operations:" << endl;
	char c; int j = 0;
	for (j; j < i - 1; j++) {
		cin >> c;
		massoper[j] = c;
	}
	double ans = 0;
	for (int k = 0; k < j; k++) {
		if (massoper[k] == '+') {
			ans = massconst[k] + massconst[k + 1];
			massconst[k + 1] = ans;
		}
		if (massoper[k] == '-') {
			ans = massconst[k] - massconst[k + 1];
			massconst[k + 1] = ans;
		}
		if (massoper[k] == '*') {
			ans = massconst[k] * massconst[k + 1];
			massconst[k + 1] = ans;
		}
		if (massoper[k] == '/') {
			ans = massconst[k] / massconst[k + 1];
			massconst[k + 1] = ans;
		}
	}
	cout << "Result = " << ans << endl;
	return 0;
}
