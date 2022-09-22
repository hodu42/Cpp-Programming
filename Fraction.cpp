#include "Fraction.h"
#include <iostream>
#include <math.h>

using namespace std;

Fraction::Fraction() {
	denom = numer = 1;
};
Fraction::Fraction(int first, int second) {
	numer = second;
	if (first == 0) {
		cout << "input denom is 0, changed to 1";
		denom = 1;
	}
	else {
		denom = first;
	}
	absolute(denom, numer);
	abb(denom, numer);
};
void Fraction::setDenom(int first) {
	if (first == 0) {
		cout << "input denom is 0, changed to 1";
		denom = 1;
	}
	else {
		denom = first;
	}
	absolute(denom, numer);
	abb(denom, numer);
};
void Fraction::setNumer(int num) {
	numer = num;
	absolute(denom, numer);
	abb(denom, numer);
};
Fraction Fraction::add(Fraction a) const {
	int bunmo = denom * a.denom;
	int bunza = (numer * a.denom) + (a.numer * denom);
	return Fraction(bunmo, bunza);
};
void Fraction::print() {
	cout << " " << numer << endl;
	if (denom < 0) {
		cout << "-" << endl;
	}
	else {
		cout << "+ -------" << endl;
	}
	cout << " " << abs(denom) << endl;
};
void Fraction::abb(int a, int b) {
	for (int i = 2; i <= a; i++) {
		if (a % i == 0) {
			if (b % i == 0) {
				denom = a / i;
				numer = b / i;
			}
		}
	}
}
void Fraction::absolute(int first, int second) {
	if (first * second < 0) {
		denom = -1 * abs(first);
		numer = abs(second);
	}
	else {
		denom = first;
		numer = second;
	}
}