#pragma once
#include <iostream>

using namespace std;

class Fraction {
public:
	Fraction(int numerator, int denominator);
	Fraction();
	void reduction(int numerator, int denominator);
	int findGCD(int numerator, int denominator);
	const Fraction operator +(const Fraction& f2) const;
	const Fraction operator -(const Fraction& f2) const;
	const Fraction operator /(const Fraction& f2) const;
	const Fraction operator *(const Fraction& f2) const;
	bool operator >(const Fraction& f2) const;
	bool operator <(const Fraction& f2) const;
	bool operator ==(const Fraction& f2) const;
	friend ostream& operator <<(ostream& outputStream, const Fraction& fraction);
	friend istream& operator >>(istream& inputStream, Fraction& fraction);
private:
	int numerator;
	int denominator;
};