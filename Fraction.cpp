#include "Fraction.h"
#include <iostream>
#include <math.h>

using namespace std;

Fraction::Fraction(int bunza, int bunmo) {
	numer = bunza;
	denomCheck(bunmo);
	gcd(numer, denom);
};
void Fraction::setDenom(int bunmo) {
	denomCheck(bunmo);
	gcd(numer, denom);
};
void Fraction::setNumer(int bunza) {
	gcd(bunza, denom);
};
Fraction Fraction::add(Fraction a) const {
	int bunza = (numer * a.denom) + (a.numer * denom);
	int bunmo = denom * a.denom;
	return Fraction(bunza, bunmo);
};
void Fraction::print() {
	if (numer * denom < 0) {
		cout << "- ";
	}
	else {
		cout << "+ ";
	}
	cout << abs(numer) << "/" << abs(denom) << endl;
};
void Fraction::gcd(int bunza, int bunmo) {
	int small = 0, gcd = 1;
	if (abs(bunmo) >= abs(bunza)) {
		small = abs(bunza);
	}
	else {
		small = abs(bunmo);
	}
	for (int i = 2; i <= small; i++) {
		if (bunza % i == 0 && bunmo % i == 0) {
			gcd = i;
		}
	}
	numer = bunza / gcd, denom = bunmo / gcd;
}
void Fraction::denomCheck(int bunmo) {
	if (bunmo == 0) {
		cout << "error : input denom is 0, changed to 1";
		denom = 1;
	}
	else {
		denom = bunmo;
	}
}