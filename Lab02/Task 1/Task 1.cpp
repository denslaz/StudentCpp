#include "pch.h"
#include <iostream>
#include <string>
#include <stdlib.h>
using namespace std;

int main()
{
	cout << "Input constants:" << endl;
	string s; double massconst[1000]; char massoper[1000]; int i = 0;
	for (i; i < 1000; i++) {
		cin >> s;
		if (s == "end")break;
		double n = stod(s);
		massconst[i] = n;
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