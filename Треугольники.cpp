#include <iostream>
#include "Triangle.h"

void main()
{
	setlocale(LC_ALL, "ru");
	double a, b, c;

	Triangle triangle;
	while (true) {
		cout << "Введите 3 стороны:" << endl;
		cin >> a >> b >> c;

		triangle.set(a, b, c);

		if (triangle.exist_tr())
		{
			triangle.show();
			cout << "Периметр = " << triangle.perimetr() << endl;
			cout << "Площадь = " << triangle.square() << endl;
			break;
		}
		else
		{
			cout << "Такого треугольника не существет, введите заново" << "\n\n===================================" << endl;
		}
	}
}
