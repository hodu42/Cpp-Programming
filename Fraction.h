#pragma once

class Fraction {
public:
	Fraction();
	Fraction(int, int);
	int getDenom();
	int getNumer();
	void setDenom(int);
	void setNumer(int);
	Fraction add(Fraction) const;
	void print();
private:
	int denom, numer;
	void abb(int, int);
	void absolute(int, int);
};
