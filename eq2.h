#pragma once
#include <iostream>
#include <cmath>
using namespace std;

class eq2
{
private:
	double a, b, c, D;
	void operator = (const eq2& other);
public:
	eq2(double a1, double b1, double c1);
	void set(double a1, double b1, double c1);
	double find_X();
	double find_Y(double x1);
	eq2 operator +(eq2& other);
};