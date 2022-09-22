#pragma once

class Fraction {
public:
	Fraction(int = 1, int = 1);
	void setDenom(int);
	void setNumer(int);
	Fraction add(Fraction) const;
	void print();
private:
	int denom, numer;
	void gcd(int, int);
	void denomCheck(int);
};
