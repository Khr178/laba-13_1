//////////////////////////////////////////////////////////////////////////////
// Lab_13_1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
// головний файл проекту – функція main

#include <iostream>
#include <cmath>
#include <iomanip>

#include "dod.h"
#include "sum.h"
#include "var.h"

using namespace std;

using namespace nsDod;
using namespace nsSum;
using namespace nsVar;
int main()
{

	cout << "x_p = "; cin >> x_p;
	cout << "x_k = "; cin >> x_k;
	cout << "dx = "; cin >> dx;
	cout << "eps = "; cin >> eps;
	cout << endl;

	x = x_p;
	if (x > 1)
		while (x <= x_k) {
			sum(); // виклик процедури обчислення суми
			cout << x << " "
				<< s << " "
				<< atan(x) << " "
				<< n << endl; // тут слід використовувати форматний вивід
			x += dx;
		}
	cin.get();
	return 0;
}





	