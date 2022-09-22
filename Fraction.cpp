#include "Fraction.h"
#include <iostream>
#include <math.h>

using namespace std;

Fraction::Fraction() {
	denom = numer = 1;
};
Fraction::Fraction(int bunza, int bunmo) {
	numer = bunza;
	if (bunmo == 0) {
		cout << "input denom is 0, changed to 1";
		denom = 1;
	}
	else {
		denom = bunmo;
	}
	absolute(numer, denom);
	abb(numer, denom);
};
void Fraction::setDenom(int bunmo) {
	if (bunmo == 0) {
		cout << "input denom is 0, changed to 1";
		Fraction(numer, 1);
	}
	else {
		Fraction(numer, bunmo);
	}
};
void Fraction::setNumer(int bunza) {
	Fraction(bunza, denom);
};
Fraction Fraction::add(Fraction a) const {
	int bunza = (numer * a.denom) + (a.numer * denom);
	int bunmo = denom * a.denom;
	return Fraction(bunza, bunmo);
};
void Fraction::print() {
	if (denom < 0) {
		cout << "- ";
	}
	else {
		cout << "+ ";
	}
	cout << numer << "/" << denom << endl;
};
void Fraction::abb(int bunza, int bunmo) {
	for (int i = 2; i <= bunza; i++) {
		if (bunza % i == 0) {
			if (bunmo % i == 0) {
				denom = bunmo / i;
				numer = bunza / i;
			}
		}
	}
}
void Fraction::absolute(int bunza, int bunmo) {
	if (bunza * bunmo < 0) {
		denom = -1 * abs(bunmo);
		numer = abs(bunza);
	}
	else {
		denom = bunmo;
		numer = bunza;
	}
}