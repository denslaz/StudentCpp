
#include "pch.h"
#include <iostream>

using namespace std;

int main()
{
	cout << "Input the expression:" << endl;
	int a, b;
	char c;
	cin >> a >> c >> b;
	if (cin.fail()) {
		cin.clear();
		cin.ignore(cin.rdbuf()->in_avail());
		cout << "You have entered the wrong expression, please retry, ";
		main();
	}
	if (c == '+') {
		cout << "result = " << a + b;
		return 0;
	}
	else if (c == '-') {
		cout << "result = " << a - b;
		return 0;
	}
	else if (c == '*') {
		cout << "result = " << a * b;
		return 0;
	}
	else if (c == '/') {
		cout << "result = " << a / b;
		return 0;
	}
	else {
		cout << "You have entered the wrong symbol, please retry, ";
		main();
	}
	return 0;
}