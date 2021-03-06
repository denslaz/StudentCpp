#include "pch.h"
#include <iostream>
#include <fstream>
#include <algorithm>

using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");
	string path = "INPUT.TXT";
	ofstream fout;

	fout.open(path);

	if (!fout.is_open()) {
		cout << "Ошибка открытия файла INPUT.TXT!" << endl;
	}
	else {
		fout << 45 << " " << 31 << endl << 3 << " " << 6 << endl;
	}

	ifstream fin;
	fin.open(path);
	if (!fin.is_open()) {
		cout << "Ошибка открытия файла INPUT.TXT!" << endl;
	}
	else {
		cout << "Файл был открыт правильно" << endl;
		int *poryadok = new int[100];
		int size = 0;
		int i = 0;
		int ch;
		while (fin) {
			fin >> ch;
			poryadok[i] = ch;
			i++;
			size++;
		}
		size--;
		cout << "Исходные числа: ";
		for (int m = 0; m < size; m++) {
			cout << poryadok[m] << " ";
		}
		cout << endl;
		int l;
		for (int i = 0; i < size - 1; i++) {
			for (int j = 0; j < size - i - 1; j++) {
				if (poryadok[j] > poryadok[j + 1]) {
					l = poryadok[j];
					poryadok[j] = poryadok[j + 1];
					poryadok[j + 1] = l;
				}
			}
		}
		cout << "Отсортированные числа: ";
		for (int m = 0; m < size; m++) {
			cout << poryadok[m] << " ";
		}
		string finally = "OUTPUT.TXT";
		ofstream fin;

		fin.open(finally);

		if (!fout.is_open()) {
			cout << "Ошибка открытия файла INPUT.TXT!" << endl;
		}
		else {
			for (int m = 0; m < size; m++) {
				fin << poryadok[m] << " ";
			}
		}

		delete [] poryadok;
		return 0;
	}
}