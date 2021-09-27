#include "Fraction.h"
#include <iostream>

using namespace std;

Fraction::Fraction(int insertNum, int insertDenom) {
	reduction(insertNum, insertDenom);
}

Fraction::Fraction(int* arr) {
	reduction(arr[0], arr[1]);
}

Fraction::Fraction() : numerator(0), denominator(0) {}

void Fraction::reduction(int insertNum, int insertDenom) {
	int gcd;
	if ((insertNum > 0 && insertDenom > 0) || (insertNum < 0 && insertDenom < 0)) {
		if (insertNum < 0 && insertDenom < 0) {
			insertNum *= -1;
			insertDenom *= -1;
		}
		gcd = findGCD(insertNum, insertDenom);
		numerator = insertNum / gcd;
		denominator = insertDenom/ gcd;
	}
	else if(insertDenom == 0) {
		cout << "분모가 0이면 안 됩니다. 종료합니다.";
		exit(1);
	}
	else {
		if (insertNum < 0 && insertDenom > 0) {
			insertNum *= -1;
		}
		else if (insertNum > 0 && insertDenom < 0) {
			insertDenom *= -1;
		}
		gcd = findGCD(insertNum, insertDenom);
		numerator = -insertNum / gcd;
		denominator = insertDenom / gcd;
	}
}

int Fraction::findGCD(int numerator, int denominator) {
	int temp;
	while (denominator != 0) {
		temp = numerator % denominator;
		numerator = denominator;
		denominator = temp;
	}
	return numerator;
}

Fraction Fraction::add(Fraction fraction2) {
	if (denominator == fraction2.denominator) {
		arr[0] = numerator + fraction2.numerator;
		arr[1] = denominator;
	}
	else {
		arr[0] = numerator * fraction2.denominator + fraction2.numerator * denominator;
		arr[1] = denominator * fraction2.denominator;
	}
	cout << numerator << "/" << denominator << " + " << fraction2.numerator << "/" << fraction2.denominator << " = ";
	return arr;
}

Fraction Fraction::substract(Fraction fraction2) {
	if (denominator == fraction2.denominator) {
		arr[0] = numerator - fraction2.numerator;
		arr[1] = denominator;
	}
	else {
		arr[0] = numerator * fraction2.denominator - fraction2.numerator * denominator;
		arr[1] = denominator * fraction2.denominator;
	}
	cout << numerator << "/" << denominator << " - " << fraction2.numerator << "/" << fraction2.denominator << " = ";
	return arr;
}

Fraction Fraction::multiply(Fraction fraction2) {
	if (denominator == fraction2.denominator) {
		arr[0] = numerator * fraction2.numerator;
		arr[1] = denominator;
	}
	else {
		arr[0] = numerator * fraction2.numerator;
		arr[1] = denominator * fraction2.denominator;
	}
	cout << numerator << "/" << denominator << " * " << fraction2.numerator << "/" << fraction2.denominator << " = ";
	return arr;
}

Fraction Fraction::divide(Fraction fraction2) {
	if (denominator == fraction2.denominator) {
		arr[0] = numerator;
		arr[1] = fraction2.numerator;
	}
	else {
		arr[0] = numerator * fraction2.denominator;
		arr[1] = denominator * fraction2.numerator;
	}
	cout << numerator << "/" << denominator << " / " << fraction2.numerator << "/" << fraction2.denominator << " = ";
	return arr;
}

void Fraction::print() {
	cout << numerator << "/" << denominator << endl;
}