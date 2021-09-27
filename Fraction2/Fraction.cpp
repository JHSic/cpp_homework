#include "Fraction.h"

Fraction::Fraction(int insertNum, int insertDenom) {
	reduction(insertNum, insertDenom);
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
		denominator = insertDenom / gcd;
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

const Fraction Fraction::operator +(const Fraction& f2) const{
	int addNum, addDenom;
	if (denominator == f2.denominator) {
		addNum = numerator + f2.numerator;
		addDenom = denominator;
	}
	else {
		addNum = numerator * f2.denominator + f2.numerator * denominator;
		addDenom = denominator * f2.denominator;
	}
	return Fraction(addNum, addDenom);
}

const Fraction Fraction::operator -(const Fraction& f2) const {
	int subNum, subDenom;
	if (denominator == f2.denominator) {
		subNum = numerator - f2.numerator;
		subDenom = denominator;
	}
	else {
		subNum = numerator * f2.denominator - f2.numerator * denominator;
		subDenom = denominator * f2.denominator;
	}
	return Fraction(subNum, subDenom);
}

const Fraction Fraction::operator *(const Fraction& f2)const {
	int multiNum, multiDenom;
	if (denominator == f2.denominator) {
		multiNum = numerator * f2.numerator;
		multiDenom = denominator;
	}
	else {
		multiNum = numerator * f2.numerator;
		multiDenom = denominator * f2.denominator;
	}
	return Fraction(multiNum, multiDenom);
}

const Fraction Fraction::operator /(const Fraction& f2)const {
	int divNum, divDenom;
	if (denominator == f2.denominator) {
		divNum = numerator;
		divDenom = f2.numerator;
	}
	else {
		divNum = numerator * f2.denominator;
		divDenom = denominator * f2.numerator;
	}
	return Fraction(divNum, divDenom);
}

bool Fraction::operator <(const Fraction& f2) const {
	if (denominator == f2.denominator) {
		return numerator < f2.numerator;
	}
	else {
		return ((numerator * f2.denominator) < (f2.numerator * denominator));
	}
}

bool Fraction::operator >(const Fraction& f2) const {
	if (denominator == f2.denominator) {
		return numerator > f2.numerator;
	}
	else {
		return ((numerator * f2.denominator) > (f2.numerator * denominator));
	}
}

bool Fraction::operator ==(const Fraction& f2) const {
	return ((numerator == f2.numerator) && (denominator == f2.denominator));
}

ostream& operator <<(ostream& outputStream, const Fraction& fraction) {
	outputStream << fraction.numerator << "/" << fraction.denominator;

	return outputStream;
}

istream& operator >>(istream& inputStream, Fraction& fraction) {
	int insertNum, insertDenom;
	inputStream >> insertNum >>insertDenom;

	while (insertDenom == 0) {
		cout << "분모가 0이면 안 됩니다. 재입력 받습니다." << endl;
		cout << "분자와 분모를 정수로 입력하세요 : ";
		inputStream >> insertNum >> insertDenom;
	}
	fraction.reduction(insertNum, insertDenom);

	return inputStream;
}