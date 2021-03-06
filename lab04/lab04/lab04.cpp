#include "pch.h" 
#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

struct Note
{
	string firstname, secondname;
	long long phone, birthday;
};

template<typename T>
struct List
{
	List();
	~List();

	void push_back(T data);
	int getsize() { return size; }
	T& operator[](const int index);
	template<typename T>      // создадим шаблон, чтобы работать с любым типом данных
	class node {
	public:
		node *pNext;          //указатель на следующий элемент в списке
		T data;               //создаем данные для ячейки списка
		node(T data = T(), node *pNext = nullptr) // конструктор для node
		{
			this->data = data;
			this->pNext = pNext;
		}
	};
	int size;
	node<T> *head;    // голова списка

	void clear()
	{


		while (head != nullptr)
		{
			delete[] head->data.Name;

			Note* temp = head;
			head = head->next;

			delete temp;
		}
	}
};

template<typename T>
List<T>::List()
{
	size = 0;
	head = nullptr;
}
template<typename T>
List<T>::~List()
{

}

template<typename T>
void List<T>::push_back(T data)
{
	if (head == nullptr) {
		head = new node<T>(data);
	}
	else {
		node<T> *current = this->head;
		while (current->pNext != nullptr)
		{
			current = current->pNext;
		}
		current->pNext = new node<T>(data);
	}
	size++;
}

template<typename T>
T & List<T>::operator[](const int index) {
	int counter = 0;
	node<T> *current = this->head;
	while (current != nullptr)
	{
		if (counter == index) {
			return current->data;
		}
		current = current->pNext;
		counter++;
	}
}

int main()
{
	setlocale(LC_ALL, "Rus");
	int arraySize = 8;
	List<Note> list;

	for (int i = 0; i < arraySize; i++)
	{
		Note human;
		cout << "Введите имя " << i + 1 << " человека: ";
		cin >> human.firstname;
		if (human.firstname == "end") {
			break;
		}
		else {


			cout << "Введите фамилию " << i + 1 << " человека: ";
			cin >> human.secondname;

			cout << "Введите телефон " << i + 1 << " человека: ";
			cin >> human.phone;

			cout << "Введите дату рождения " << i + 1 << " человека: ";
			cin >> human.birthday;

			list.push_back(human);
		}
	}

	for (int i = 0; i < arraySize; i++) {
		cout << list[i].firstname << endl;
		cout << list[i].secondname << endl;
		cout << list[i].phone << endl;
		cout << list[i].birthday << endl;
	}


	return 0;
}