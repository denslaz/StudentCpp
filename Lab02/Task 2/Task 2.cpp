#include "pch.h"
#include <iostream>
#include <string>
#include <stdlib.h>
using namespace std;

void Check(char *s) {
	int size = strlen(s);
	for (int i = 0; i < size; i++) {
		int r = (int)s[i];
		if (isdigit(r) == 0 && (s[0] != 'e') && (s[1] != 'n') && (s[2] != 'd')) {
			cout << "Error, your symbol was changed to 0!" << endl;
			break;
		}
		else {
			continue;
		}
	}
}
int main()
{
	cout << "Input constants:" << endl;
	char s[100]; double massconst[1000]; char massoper[1000]; int i = 0;
	for (i; i < 1000; i++) {
		cin >> s;
		Check(s);
		if ((s[0] == 'e') && (s[1] == 'n') && (s[2] == 'd')) {
			break;
		}
		else {
			double n = atof(s);
			massconst[i] = n;
		}
	}
	cout << "Input operations:" << endl;
	char c; int j = 0;
	for (j; j < i - 1; j++) {
	    cin >> c;
		if (c != '+' && c != '-' && c != '*' && c != '/') {
			while (c != '+' && c != '-' && c != '*' && c != '/') {
				cout << "Please enter the right number!" << endl;
				cin >> c;
			}
		}
		else massoper[j] = c;
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