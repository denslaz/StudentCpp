#include "pch.h"
#include <iostream>
#include <fstream>
#include <string>
using namespace std;


template<typename T>
class collection { // создаем непосредственно сам шаблонный класс - коллекцию
public:
	collection();
	~collection();


	void deleteFirst(); // создадим метод чтобы удалить первый элемент списка, с помощью этого способа можно будет удалить
	void clear(); // создадим метод удаления всего списка
	void push(T data); // создаем метод для заполнения списка, реализация будет ниже
	int GetSize() { return Size;  } // создадим небольшой метод(геттер) для того чтобы вывести размер списка
	void rem(int index);// создадим метод удаления конкретного элемента из списка


	T& operator[](const int index); // перегрузим оператор [] чтобы итерироваться по списку 
	friend ostream& operator<<(ostream& out, const collection& point) // перегрузим оператор вывода
	{
		point.Temp = data.First;
		while (data.Temp != NULL)
		{
			out << data.Temp->data;
			data.Temp = data.Temp->Next;
		}
		return out; 
	}
	friend istream& operator>>(istream & in, collection & point)//перегрузим оператор ввода
	{
		point.Temp = new element;
		point.Temp->Next = NULL;
		in >> point.Temp->data;
		point.push(point.Temp);
		return in;
	}

private:
	template<typename T>
    struct element // описываем класс элемента
	{
	public:
		element *Next; // создаем указатель на следующий элемент
		T data; // данные введеные пользователем

		element(T data = T(), element *Next = nullptr) // создаем конструктор к элементу и передаем туда данные
		{
			this->data = data;
			this->Next = Next;
		}
	};
	int Size; // создаем переменную, которая будет считать кол-во элементов в списке
	element<T> *First, *Temp; // создаем указатель на первый элемент списка
};

template <typename T>
collection<T>:: collection() // вынесем конструктор  и деструктор за класс, чтобы не путаться в коде
{
	Size = 0; // задаем первоначальный размер списка
	First = nullptr; // задаем первоначальный указатель на элемент списка
}

template <typename T>
collection<T>:: ~collection() 
{
	clear(); // В деструкторе просто очищаем весь список вне файла
}

template<typename T>
void collection<T>::deleteFirst() // описываем метод удаления всех элементов
{
	element<T> *temp = First; // создаем временную переменную для того чтобы удалить первый элемент списка
	First = First -> Next; // изменим указатель первого элемента на последующий, чтобы удалить его
	delete temp; // удаляем временную переменную
	Size--; // понижаем размер списка

}


template<typename T>
void collection<T>::push(T data)
{
	if (First == nullptr) // проверяем пустой ли первый элемент или нет
	{ 
		First = new element<T>(data); // Если пустой, то заполняем его 
	}
	else
	{
		element<T> *temp = this->First; // Создадим времменную переменную, чтобы добавить элемент в список
		while (temp->Next != nullptr) {
			temp = temp->Next;
		 }
		temp->Next = new element<T>(data);
	}
	Size++;
}

template<typename T>
void collection<T>::clear() //данный метод удаляет все элементы списка, пока его первый элемент не будет указывать на 0
{
	while (Size != 0)
	{
		deleteFirst();
	}

}

template<typename T>
T & collection<T>::operator[](const int index) // данный метод позволит нам вывести всю информацию из ячейки которую указал пользователь
{
	int count = 0; // создадим счетчик, чтобы знать в каком элементе списка мы находимся
	element<T> *temp = this->First;
	while(temp != nullptr)
	{
		if (count == index)
		{
			return temp->data;
		}
		temp = temp->Next;
		count++;
	}
}

template<typename T>
void collection<T>::rem(int index) // метод удаления конкретного элемента
{
	if (index == 0) // если необходимо удалить первое число то можно просто вызвать метод, который был описан выше 
	{
		deleteFirst();
	}
	else
	{
		element<T> *before = this->First; // ищем предыдущий элемент, относительно которого мы хотим удалить,
		for (int i = 0; i < index - 1; i++) //чтобы указывать теперь на него, а не на удаляемый элемент
		{
			before = before->Next;
		}

		element<T> *del = before->Next; // создаем временную переменную чтобы в нее записать удаляемое значение
                                           // чтобы избежать утечки памяти
		before->Next = del->Next;

		delete del; // удаляем элемент
		Size--; //уменьшаем размер списка на 1

	}

}


int main()
{
	setlocale(LC_ALL, "Russian");
	ifstream fin; // создаем переменную для вывода всех данных из файла
	fstream fout; // создадим переменную для записи данных в файл
	int a=0;
	char c;
	collection<int> b;
	fin.open("Kvartira.txt"); // открываем файл "квартира", чтобы считать все данные оттуда
	while (fin.get(c)) // добавляем цикл while, который будет работать до тех пор, пока в файле не закончаться данные
	{
		fin >> c;
		b.push(c);
	}
	fin.close();

	int vibor1 = 0;
	int vibor2 = 0;
	cout << "Здравствуйте, вы запустили программу по поиску квартир." << "Что бы вы хотели сделать?" << endl <<
		"1) Начать работу непосредственно с самим списком квартир." << endl <<
		"2) Перейти к поиску квартир по каким-либо критериям." << endl <<
		"3) Выход." << endl;
	cin >> vibor1;
	switch (vibor1)
	{
	case 1:
		cout << "1)Внести элемент в список" << endl <<
			"2)Вывести весь список" << endl <<
			"3)Удалить элемент списка" << endl <<
			"4)Удалить весь список" << endl <<
			"5)Вывести размер списка" << endl <<
			"6)Выход" << endl;
			while (a != 6) {
				cin >> a;
				switch (a)
				{
				case 1:
					char l;
					cout << "Введите число: ";
					cin >> l;
					b.push(l);
					break;
				case 2:
					cout << "Вся коллекция: " << endl;
					for (int i = 0; i < b.GetSize(); i++)
					{
						cout << b[i] << " ";
					}
					cout << endl;
					break;
				case 3:
					int a;
					cout << "Какой элемент вы хотели бы удалить: ";
					cin >> a;
					b.rem(a);
					break;
				case 4:
					b.clear();
					break;
				case 5:
					cout << b.GetSize() << endl;
					break;
				case 6:
					remove("Kvartira.txt");// Удалим весь файл, чтобы записать всё по новой
					fout.open("Kvartira.txt", fstream::app); // Создаем или открываем файл, арр-команда, которая не дает удалить данные из файла при завершений
					for (int i = 0; i < b.GetSize(); i++)
					{
						fout << b[i] << endl;
					}

					cout << "До свидания!";
					fout.close();
					return 0;
				default:
					cout << "Вы ввели неправильные данные!" << endl;
				}
				cout << "Что то ещё?" << endl;
			}
			break;
			
	case 2:
		cout << "По какому критерию вы хотели бы начать поиск?" << endl <<
		"1)Количество комнат" << endl <<
		"2)Площадь" << endl <<
		"3)Этаж" << endl <<
		"4)Район" << endl <<
		"0)Закрыть" << endl;
		cin >> vibor2;
		break;

	case 3:
		remove("Kvartira.txt");// Удалим весь файл, чтобы записать всё по новой
		fout.open("Kvartira.txt", fstream::app); // Создаем или открываем файл, арр-команда, которая не дает удалить данные из файла при завершений
		for (int i = 0; i < b.GetSize(); i++)
		{
			fout << b[i] << endl;
		}
		fout.close();
		cout << "До свидания!";
		return 0;
	}
} // конструктор копирования повторить 

