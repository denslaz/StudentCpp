#include "pch.h"
#include "iostream"
using namespace std;

int Calc() {
	int x, y, z;
	char a;
	cout << "Привет друг, введи, пожалуйста, 2 числа:" << endl;
	cout << "Число 1: ";
	cin >> x;
	cout << "Число 2: ";
	cin >> y;
	cout << "Какую операцию вы хотите выполнить?" << endl << "1. +" << endl << "2. -" << endl << "3. *" << endl << "4. /" << endl;
	cout << "Ваш выбор: ";
	cin >> z;
	if (z == 1) {
		cout << "Результат: " << x + y << endl << "Хотите повторить? y/n" << endl;
		cin >> a;
		if (a == 'y')Calc();
		if (a == 'n')return 0;
	}
	else if (z == 2) {
		cout << "Результат: " << x - y << endl << "Хотите повторить? y/n" << endl;
		cin >> a;
		if (a == 'y')Calc();
		if (a == 'n')return 0;
	}
	else if (z == 3) {
		cout << "Результат: " << x * y << endl << "Хотите повторить? y/n" << endl;
		cin >> a;
		if (a == 'y')Calc();
		if (a == 'n')return 0;
	}
	else if (z == 4) {
		cout << "Результат: " << x / y << endl << "Хотите повторить? y/n" << endl;
		cin >> a;
		if (a == 'y')Calc();
		if (a == 'n')return 0;
	} // || - или, && - и
}

int main()
{
	setlocale(LC_ALL, "Russian");
	Calc();
	return 0;
}