#include "Fraction.h"
#include <sstream>
using std::stringstream;

Fraction::Fraction()
{
	this->set(1, 1);
}

Fraction::Fraction(int numerator, int denominator)
{
	this->set(numerator, denominator);
}

Fraction::Fraction(Fraction & frac)
{
	this->set(frac);
}

void Fraction::set(int numerator, int denominator)
{
	this->numerator = numerator;
	this->denominator = denominator;
}

void Fraction::set(Fraction & frac)
{
	this->set(frac.numerator, frac.denominator);
}

int Fraction::getNumerator()
{
	return this->numerator;
}

int Fraction::getDenominator()
{
	return this->denominator;
}

std::string Fraction::getFraction()
{
	stringstream ss;
	ss << this->getNumerator() << "/" << this->getDenominator();
	return ss.str();
}

Fraction &Fraction::equals(Fraction &frac)
{
	this->set(frac);
	return *this;
}

Fraction &Fraction::operator=(Fraction & frac)
{
	return this->equals(frac);
}

Fraction &Fraction::operator*=(Fraction & frac)
{
	this->numerator *= frac.getNumerator();
	this->denominator *= frac.getDenominator();
	return *this;
}

std::ostream &operator<<(std::ostream & output, Fraction & frac)
{
	output << frac.getFraction();
	return output;
}

istream & operator >> (istream & input, Fraction & frac)
{
	input >> frac.numerator;
	input >> frac.denominator;
	return input;
}


