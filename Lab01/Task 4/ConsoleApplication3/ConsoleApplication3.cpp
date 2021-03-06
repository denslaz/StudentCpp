#include "pch.h"
#include "iostream"
#include "cmath"
using namespace std;

int Calc();
double Check();

double Check() {
	double c;	
	do {
		cin >> c;
		if (cin.fail())
		{
			cin.clear();
			cin.ignore(cin.rdbuf()->in_avail());
			cout << "Ошибка, возвращаюсь к началу!" << endl;
		}
	} 	while (cin.fail());
	return c;

}

int Calc() {
	double x, y;
	char a, z;
	cout << "Привет друг, введи, пожалуйста, 2 числа:" << endl;
	cout << "Число 1: ";
	x = Check();
	cout << "Число 2: ";
	y = Check();
	cout << "Какую операцию вы хотите выполнить?" << endl << "1. +" << endl << "2. -" << endl << "3. *" << endl << "4. /" << endl << "Следующие функции применяются к первому введенному числу!" << endl << "5. Возвести в квадрат" << endl << "6. Извлечь корень" << endl << "7. Вычислить логарифм" << endl;
	cout << "Ваш выбор: ";
	cin >> z;
	switch (z) {
	case '1': cout << x + y; break;
	case '2': cout << x - y; break;
	case '3': cout << x * y; break;
	case '4': cout << x / y; break;
	case '5': cout << x * x; break;
	case '6': cout << sqrt(x); break;
	case '7': cout << "По какому основанию считать логарифм?" << endl << "Основание: ";
		double o;
		o = Check();
		cout << "Результат: " << log(x) / log(o); break;
	default: cout << "Вы ввели неправильное число, возвращаюсь к началу!" << endl;
		Calc();
		return 0;
	}
	cout << endl << "Хотите повторить? y/n" << endl;
	cin >> a;
	switch (a) {
	case 'y': Calc(); break;
	case 'n': return 0; break;
	default: cout << "Вы ввели неправильную букву, возвращаюсь к началу!" << endl;
		Calc();
		return 0;
	}
}

int main() {
	setlocale(LC_ALL, "Russian");
	Calc();
	return 0;
}






