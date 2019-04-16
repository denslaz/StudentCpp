#include "pch.h" 

#pragma once 
#include <iostream> 
#include <cstdlib> 
#include <string.h> 
using namespace std;

struct Book
{
	char* Name;
	int Year;
};
template <class T2>
struct List
{
	struct Node
	{
		T2 data;
		Node* next;
		Node* prev;
	};
	Node* head = nullptr;

	template <class T2>

	void addFirst(T2 book)
	{
		Node* temp = new Node;
		temp->data = book;
		temp->next = NULL;
		temp->prev = NULL;

		if (head == NULL)
		{
			head = temp;
			return;
		}

		temp->next = head;
		head->prev = temp;
		head = temp;
	}

	void print()
	{
		Node* temp = head;
		while (temp != nullptr)
		{
			cout << temp->data.Name << " (" << temp->data.Year << ")" << endl;
			temp = temp->next;
		}
	}

	void clear()
	{

		while (head != nullptr)
		{
			delete[] head->data.Name;

			Node* temp = head;
			head = head->next;

			delete temp;
		}
	}
};

template <class T1, class T2>
int main()
{
	setlocale(LC_ALL, "Rus");
	T1 arraySize = 3;
	List list;

	for (int i = 0; i < arraySize; i++)
	{
		T2 book;

		char* buff = new char[255];
		cout << "Книга " << i << ". Название: ";
		cin >> buff;

		book.Name = new char[strlen(buff) + 1];
		strcpy_s(book.Name, strlen(buff) + 1, buff);
		book.Name[strlen(buff)] = '\0';

		cout << "Книга " << i << ". Год: ";
		cin >> book.Year;

		list.addFirst(book);
	}

	list.print();

	list.clear();
}