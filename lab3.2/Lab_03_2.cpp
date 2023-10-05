// Lab_03_2.cpp
// Чернієнко Максима
// Лабораторна робота № 3.2
// Розгалуження, задане формулою: функція з параметрами.
// Варіант 25

#include<iostream>
#include<cmath>
#include<math.h>

using namespace std;

int main()
{
	double x;
	double a;
	double b;
	double c;
	double F;

	cout << "a = "; cin >> a;
	cout << "b = "; cin >> b;
	cout << "c = "; cin >> c;
	cout << "x = "; cin >> x;
	cout << "" << endl;
// спосіб 1: розгалуження в скороченій формі
	if (x < 0 && b != 0)
		F = a - x / (10 + b);
	if (x > 0 && b == 0)
		F = ((x - a) / (x - c));
	if (!(x < 0 && b != 0) && !(x > 0 && b == 0))
		F = 3 * x + 2 / c;
	cout << "F1 = " << F << endl;
	cout << "" << endl;
// спосіб 2: розгалуження в повній формі
	if (x < 0 && b != 0)
		F = a - x / (10 + b);
	else
		if (x > 0 && b == 0)
			F = ((x - a) / (x - c));
		else
			F = 3 * x + 2 / c;
	cout << "F1 = " << F << endl;
}