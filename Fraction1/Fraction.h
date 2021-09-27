#pragma once

class Fraction {
public:
	Fraction(int numerator, int denominator);
	Fraction(int* arr);
	Fraction();
	void reduction(int numerator, int denominator);
	int findGCD(int numerator, int denominator);
	Fraction add(Fraction fraction2);
	Fraction substract(Fraction fraction2);
	Fraction multiply(Fraction fraction2);
	Fraction divide(Fraction fraction2);
	void print();
private:
	int numerator;
	int denominator;
	int arr[2];
};