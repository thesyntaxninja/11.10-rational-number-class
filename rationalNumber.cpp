// 11.10 rationalNumber.cpp
// Description: Problem 2 of 2 due week 3
// Programmer: Parker Esmay
// Date: 02/09/2015

#include <iostream>
#include <cstdlib>
#include "rationalNumber.h"

using namespace std;

// Create a constructor that prevents a 0 denominator in a fraction,
// reduces or simplifies fractions that are not in reduced form and avoids
// negative denominators.
RationalNumber::RationalNumber(int n, int d)
{
	num = n;
	denom = d;
	if (d == 0 || d < 0)
	{
		cout << "Cannot enter zero or negative numbers for the denominator" << endl;
		exit (1); 
	}
	simplify();
}

// Overload addition operator
RationalNumber RationalNumber::operator +(const RationalNumber &add)
{
	RationalNumber sum;
	sum.num = num * add.denom + denom * add.num;
	sum.denom = denom * add.denom;
	sum.simplify();
	return sum;
}

// Overload subtraction operator
RationalNumber RationalNumber::operator -(const RationalNumber &sub)
{
	RationalNumber subtract;
	subtract.num = num * sub.denom - denom * sub.num;
	subtract.denom = denom * sub.denom;
	subtract.simplify();
	return subtract;
}

// Overload multiplication operator
RationalNumber RationalNumber::operator *(const RationalNumber &mul)
{
	RationalNumber multiply;
	multiply.num = num * mul.num;
	multiply.denom = denom * mul.denom;
	multiply.simplify();
	return multiply;
}

// Overload division operator
RationalNumber RationalNumber::operator /(RationalNumber &div)
{
	RationalNumber divide;
	if (div.num == 0)
	{
		cout << "Cannot divide by zero" << endl;
		exit (1); 
	}
	else
	{
		divide.num = num * div.denom;
		divide.denom = denom * div.num;
		divide.simplify();
	}
	return divide;
}

// Overload realtional and equality operators for this class
bool RationalNumber::operator >(const RationalNumber &grr) const
{
	if (static_cast<double> (num) / denom > static_cast<double>(grr.num) / grr.denom)
	return true;
	else
	return false;
}

bool RationalNumber::operator <(const RationalNumber &lsr) const
{
	if (static_cast<double>(num) / denom < static_cast<double>(lsr.num) / lsr.denom)
	return true;
	else
	return false;
}

bool RationalNumber::operator >=(const RationalNumber &grer) const
{
	{
		return *this == grer || *this > grer;
	}
}

bool RationalNumber::operator <=(const RationalNumber &lser) const
{
	{
		return *this == lser || *this < lser;
	}
}

bool RationalNumber::operator ==(const RationalNumber &eer) const
{
	if (num == eer.num && denom == eer.denom)
	return true;
	else
	return false;
}

bool RationalNumber::operator !=(const RationalNumber &ner) const
{
	{
		return !( *this == ner);
	}
}

void RationalNumber::print(void) const
{
	if (num == 0)
	cout << num;
	else if (denom == 1)
	cout << num;
	else 
	cout << num << '/' << denom;
}

// Simplify fractions that are not in reduced form
void RationalNumber::simplify(void)
{
	int largest, greatestCommonDiv = 1;
	
	largest = (num > denom) ? num: denom;
	
	for (int i = 1; i < largest; ++i)
		if ( num % i == 0 && denom % i == 0)
		greatestCommonDiv = i;
	
	num /= greatestCommonDiv;
	denom /= greatestCommonDiv;
}
