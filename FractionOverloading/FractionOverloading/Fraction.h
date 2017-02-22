#ifndef FRACTION
#define FRACTION
#include <string>
#include <istream>
#include <iostream>
using std::istream;
class Fraction
{
private:
	//data
	int numerator;
	int denominator;
public:
	//constructors
	Fraction();
	Fraction(int numerator, int denominator);
	Fraction(Fraction &frac);

	//mutator
	void set(int numerator, int denominator);
	void set(Fraction &frac);
	//accessor
	int getNumerator();
	int getDenominator();
	std::string getFraction();

	//overloading assignment
	Fraction &equals(Fraction &frac); // when overloading equals sign use pass by ref
	Fraction &operator=(Fraction &frac);
	Fraction &operator*=(Fraction &frac);

	friend std::ostream &operator << (std::ostream &output, Fraction &frac);
	friend istream &operator >> (istream &input, Fraction &frac);

};
#endif
