#include "eq2.h"

eq2::eq2(double a1, double b1, double c1)
{
	a = a1;
	b = b1;
	c = c1;
	D = 0;
}

void eq2::set(double a1, double b1, double c1)
{
	a = a1;
	b = b1;
	c = c1;
}

double eq2::find_X()
{
	D = pow(b, 2) - 4 * a * c;
	if (D < 0)
	{
		cout << "Корней нет!" << endl;
		return 0;
	}
	else if (D == 0)
	{
		double x = -b / (2 * a);
		cout << "Один корень: " << x << endl;
		return x;
	}
	else
	{
		double x1 =(-b + sqrt(D)) / (2 * a), x2 = (- b - sqrt(D)) / (2 * a);
		cout << "Корней 2. наибольший: ";
		if (x1 > x2)
		{
			cout << x1 << endl;
			return x1;
		}
		else
		{
			cout << x2 << endl;
			return x2;
		}
	}
}

double eq2::find_Y(double x1)
{
	return a * pow(x1, 2) + b * x1 + c;
}

void eq2::operator=(const eq2& other)
{
	this->a = other.a;
	this->b = other.b;
	this->c = other.c;
}



eq2 eq2::operator+(eq2& other)
{
	eq2 temp = other;
	temp.a += this->a;
	temp.b += this->b;
	temp.c += this->c;
	return temp;
}
