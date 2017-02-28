#include <iostream>
#include "Fraction.h"

int main()
{
	using namespace std;
	Fraction f(9, 3), f2(f), f3;

	// test
	cout << "Numerator: " << f.getNumerator() << endl;
	cout << "Denominator: " << f.getDenominator() << endl;
	cout << "Fraction 1 : " << f.getFraction() << endl;
	cout << "Fraction 2 : " << f2.getFraction() << endl;
	cout << "Fraction 3 : " << f3.getFraction() << endl << endl;

	f3 = f = f2;
	cout << "Fraction 1 : " << f.getFraction() << endl;
	cout << "Fraction 2 : " << f2.getFraction() << endl;
	cout << "Fraction 3 : " << f3.getFraction() << endl;

	f *= f;
	cout << "Fraction 1 : " << f.getFraction() << endl;
	cout << "Fraction 1 as fraction : " << f << endl;
	cout << "Enter a fraction and I will square it.\n";
	cin >> f;
	cout << f * f << endl;
}