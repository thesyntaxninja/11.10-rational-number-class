// 11.10 rationalNumber.h
// Description: Problem 2 of 2 due week 3
// Programmer: Parker Esmay
// Date: 02/09/2015

#ifndef rationalNumber
#define rationalNumber

// Create a class RationalNumber (fractions) with the following capabilities
// A. Create a constructor that prevents a 0 denominator in a fraction,
// reduces or simplifies fractions that are not in reduced form and avoids
// negative denominators.
// B. Overload the addition, subtraction, multiplication and division operators
// for this class.
// C. overload the relational and equality operators for this class.

class RationalNumber
{
	public:
		RationalNumber(int = 0, int = 1);
		RationalNumber operator +(const RationalNumber&);
		RationalNumber operator -(const RationalNumber&);
		RationalNumber operator *(const RationalNumber&);
		RationalNumber operator /(RationalNumber&);
		bool operator >(const RationalNumber&) const;
		bool operator <(const RationalNumber&) const;
		bool operator >=(const RationalNumber&) const;
		bool operator <=(const RationalNumber&) const;
		bool operator ==(const RationalNumber&) const;
		bool operator !=(const RationalNumber&) const;
		void print(void) const;
		
		
	private:
		int num;
		int denom;
		void simplify(void);	
};

#endif
