#include "pch.h"
#include "iostream"
#include "cmath"
using namespace std;

int Calc() {
	double x, y;
	int z;
	char a;
	cout << "Привет друг, введи, пожалуйста, 2 числа:" << endl;
	cout << "Число 1: ";
	cin >> x;
	if ((x) != double(x)) {
		cout << "Число 2: ";
	}
	else { 
		cout << "Введите правильное число" << endl << "Хотите повторить? y/n" << endl;
		cin >> a;
		if (a == 'y')Calc();
		if (a == 'n')return 0;
	cin >> y;
	cout << "Какую операцию вы хотите выполнить?" << endl << "1. +" << endl << "2. -" << endl << "3. *" << endl << "4. /" << endl << "Следующие функции применяются к первому введенному числу!" << endl << "5. Возвести в квадрат" << endl << "6. Извлечь корень" << endl << "7. Вычислить логарифм" << endl;
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
	}
	else if (z == 5) {
		cout << "Результат: " << x * x << endl << "Хотите повторить? y/n" << endl;
		cin >> a;
		if (a == 'y')Calc();
		if (a == 'n')return 0;
	}
	else if (z == 6) {
		cout << "Результат: " << sqrt(x) << endl << "Хотите повторить? y/n" << endl;
		cin >> a;
		if (a == 'y')Calc();
		if (a == 'n')return 0;
	}
	else if (z == 7) {
		cout << "По какому основанию считать логарифм?" << endl << "Основание: ";
		int o; cin >> o;
		cout << "Результат: " << log(x) / log(o) << endl << "Хотите повторить? y/n" << endl;
		cin >> a;
		if (a == 'y')Calc();
		if (a == 'n')return 0;
	}
	else {
		cout << "Введите правильное число" << endl << "Хотите повторить? y/n" << endl;
		cin >> a;
		if (a == 'y')Calc();
		if (a == 'n')return 0;

	}
}

int main()
{
	setlocale(LC_ALL, "Russian");
	Calc();
	return 0;
}