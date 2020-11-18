// OOPLABA2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
//#define _USE_MATH_DEFINES;

#include <iostream>
#define _USE_MATH_DEFINES
#include <math.h>

using namespace std;
class Circle {

	float r;
public:
	void set_r() {
		while (true) {
			cout << "VVedite radius okruzhnosti: " << endl;
			try {
				float buff;
				cin >> buff;
				if (cin.fail())
				{
					cout << "Vvedite chislo!!!!!!!!!" << endl;

					cin.clear();
					cin.ignore(INT_MAX, '\n');
					continue;
				}

				cout << endl;
				if (buff <= 0)
				{
					cout << "Vvedite chsilo bol'she nulya" << endl;
				}
				else {
					r = buff;
					cout << "AKEY" << endl << endl;
					return;
				}

			}
			catch (float a)
			{
				cout << "Vvedite chislo!!!!!!!!!" << endl;
				continue;
			}
		}
	}
	void print_r() {
		cout << "Radius: ";
		cout << (*this).r << endl;
		return;
	}
	float get_sq() {
		return  M_PI * r * r;
	}
	float get_len() {
		return 2.*  M_PI * r;
	}


public:
	void print_all() {
		this->print_r();
		cout << "PLOSH'CHA  : " << this->get_sq() << endl;
		cout << "DLINNA  : " << this->get_len() << endl;
		return;
	}

	Circle() {
		set_r();
	}
	Circle(float r1) {
		r = r1;
	}
};

int main()
{

	Circle c2 = Circle(15.5f);
	c2.print_all();
	Circle c1;
	c1.print_all();
}


