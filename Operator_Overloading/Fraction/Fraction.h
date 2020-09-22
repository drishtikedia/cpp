
/*Design fraction class with suitable operator overloading
Attributes - numerator, denominator
Suitable constructors
Display fraction in a/b format
Apply simplification wherever applicable (constructor or display)
Operator overloading
f1+f2
f1-f2
f1*f2
n+f1        //adding an integer n to fraction
f1==f2*/

#include <iostream>
 
class Fraction
{
private:
	int m_numerator;
	int m_denominator;
 
public:
	Fraction(int numerator=0, int denominator=1):
		m_numerator(numerator), m_denominator(denominator)
	{
		// We put reduce() in the constructor to ensure any new fractions we make get reduced!
		// Any fractions that are overwritten will need to be re-reduced
		reduce();
	}
 
	// We'll make gcd static so that it can be part of class Fraction without requiring an object of type Fraction to use
	static int gcd(int a, int b)
	{
		return b == 0 ? a : gcd(b, a % b);
	}
 
	void reduce()
	{
		if (m_numerator != 0 && m_denominator != 0)
		{
			int gcd = Fraction::gcd(m_numerator, m_denominator);
			m_numerator /= gcd;
			m_denominator /= gcd;
		}
	}
 
	friend Fraction operator*(const Fraction &f1, const Fraction &f2);
	friend Fraction operator*(const Fraction &f1, int value);
	friend Fraction operator*(int value, const Fraction &f1);
    friend Fraction operator+(const Fraction &f1,const Fraction &f2);
    friend Fraction operator-(const Fraction &f1,const Fraction &f2);
    friend Fraction operator+(const Fraction &f1,int n);
    friend bool operator==(const Fraction &f1,const Fraction &f2);
 
	void print()
	{
		std::cout << m_numerator << "/" << m_denominator << "\n";
	}
};
 
Fraction operator*(const Fraction &f1, const Fraction &f2)
{
	return Fraction(f1.m_numerator * f2.m_numerator, f1.m_denominator * f2.m_denominator);
}
 
Fraction operator*(const Fraction &f1, int value)
{
	return Fraction(f1.m_numerator * value, f1.m_denominator);
}
 
Fraction operator*(int value, const Fraction &f1)
{
	return Fraction(f1.m_numerator * value, f1.m_denominator);
}

Fraction operator+(const Fraction &f1,const Fraction &f2){
    Fraction n1;
    n1.m_numerator = f1.m_numerator*f2.m_denominator+f1.m_denominator*f2.m_numerator;
    n1.m_denominator = f1.m_denominator*f2.m_denominator;
    return n1;
}

Fraction operator-(const Fraction &f1,const Fraction &f2){
   Fraction n1;
    n1.m_numerator = f1.m_numerator*f2.m_denominator-f1.m_denominator*f2.m_numerator;
    n1.m_denominator = f1.m_denominator*f2.m_denominator;
    return n1; 
}

Fraction operator+(const Fraction &f1,int n){
    Fraction n1;
    n1.m_numerator = f1.m_numerator+f1.m_denominator*n;
    n1.m_denominator = f1.m_denominator;
    return n1; 
}

bool operator==(const Fraction &f1,const Fraction &f2){
    return((f1.m_numerator==f2.m_numerator)&&(f2.m_denominator==f1.m_denominator));
}



