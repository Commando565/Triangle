//#pragma once
#ifndef TRIANGLE_H
#define TRIANGLE_H
#include <string>
#include <cmath>
using namespace std;

class Triangle
{
	private:
		double a, b, c;
		double A, B, C;
		double PI = 3.14159265359;
		string myString;

	public:
		Triangle();
		Triangle(double a, double b, double c);
		double getAngleA();
		double getAngleB();
		double getAngleC();

		string ToString();
};

Triangle::Triangle()
{
	a = 1;
	b = 1;
	c = 1;

	A = 60;
	B = 60;
	C = 60;
}

Triangle::Triangle(double sidea, double sideb, double sidec)
{
	a = sidea;
	b = sideb;
	c = sidec;

	A = acos((pow(b, 2) + pow(c, 2) - pow(a, 2)) / (2 * b * c)) * 180 / PI;
	B = acos((pow(a, 2) + pow(c, 2) - pow(b, 2)) / (2 * a * c)) * 180 / PI;
	C = acos((pow(a, 2) + pow(b, 2) - pow(c, 2)) / (2 * a * b)) * 180 / PI;
}

double Triangle::getAngleA()
{
	return A;
}
double Triangle::getAngleB()
{
	return B;
}
double Triangle::getAngleC()
{
	return C;
}

string Triangle::ToString()
{
	myString = "Side a: " + to_string(a) + "\n" + "Side b: " + to_string(b) + "\n" + "Side c: " + to_string(c) + "\n\n"
		"Angle A: " + to_string(A) + "\n" + "Angle B: " + to_string(B) + "\n" + "Angle C: " + to_string(C) + "\n";
	return myString;
}
#endif