#include "pch.h"
#include <iostream>
#include <string>
using namespace std;

class Figures {
public:
	virtual string print() 
	{
		return "Check";
	}
};

class Circle : Figures {
private :
	int x=0, y=0, R=6;
public:
	string print()
	{
		return "cicle = [("
			+ to_string(x)
			+ ", "
			+ to_string(y)
			+ "), "
			+ to_string(R)
			+ " ]";
	}


};

class rectangle : Figures {
private:
	int x = 2, y = 3, w = 5, h = 7;
public:
	string print()
	{
		return "cicle = [("
			+ to_string(x)
			+ ", "
			+ to_string(y)
			+ "), "
			+ to_string(w)
			+ " "
			+to_string(h)
			+ " ]";
	}

};

class line : Figures {
private:
	int x1 = 1, y1 = 1, x2 = 3, y2 = 3;
public:
	string print()
	{
		return "cicle = [("
			+ to_string(x1)
			+ ", "
			+ to_string(y1)
			+ "), ("
			+ to_string(x2)
			+ ", "
			+ to_string(y2)
			+ " )]";
	}

};

int main()
{
	Figures f;
	Circle c;
	rectangle r;
	line l;
	Figures**arr = new Figures*[3];
	arr[0] = (Figures*) new Circle;
    arr[1] = (Figures*) new rectangle;
	arr[2] = (Figures*) new Circle;

	cout << arr[0]->print() << endl;
	cout << arr[1]->print() << endl;
	cout << arr[2]->print() << endl;
	delete [] arr;
	return 0;
}
