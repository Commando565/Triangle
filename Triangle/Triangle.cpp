#include <iostream>
#include "Triangle.h"
using namespace std;

int main()
{
	double sidea, sideb, sidec;
	cout << "Enter The three side lengths of the triangle:" << endl;

	cout << "Side a: ";
	cin >> sidea;

	cout << "Side b: ";
	cin >> sideb;

	cout << "Side c: ";
	cin >> sidec;
	
	Triangle myTri(sidea, sideb, sidec);
	cout << myTri.ToString();

	system("pause");
	return 0;
}
