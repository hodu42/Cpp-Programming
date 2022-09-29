#include <iostream>
#include "Money.h"

Money::Money() {
	dollars = 0;
	cents = 0;
}
Money::Money(int inputDollar, int inputCents) {
	dollars = inputDollar;
	cents = inputCents;
	setUnits();
}
int Money::getDollars() const {
	return dollars;
}
int Money::getCents() const {
	return cents;
}
void Money::setDollars(int inputDollars) {
	dollars = inputDollars;
}
void Money::setCents(int inputCents) {
	cents = inputCents;
	setUnits();
}
void Money::inputNreturn() {
	cout << "Input dollars and cents : ";
	int inputDollars, inputCents;
	cin >> inputDollars >> inputCents;
	setDollars(inputDollars);
	setCents(inputCents);
	cout << "Input amount is " << toString() << endl;
}
string Money::toString() const {
	string str = "$" + dollars + '.' + cents;
	return str;
}
void Money::setUnits() {
	if (cents >= 100) {
		dollars += cents / 100;
		cents = cents % 100;
	}
}
const Money operator +(const Money& m1, const Money& m2) {
	int totalDollars = m1.getDollars() + m2.getDollars();
	int totalCents = m1.getCents() + m2.getCents();
	return Money(totalDollars, totalCents);
}
const Money operator -(const Money& m1, const Money& m2) {
	int m1ToCents = m1.getDollars() * 100 + m1.getDollars();
	int m2ToCents = m2.getDollars() * 100 + m2.getCents();
	int resultCents = m1ToCents - m2ToCents;
	int totalDollars = resultCents / 100;
	int totalCents = resultCents % 100;
	return Money(totalDollars, totalCents);
}
const bool Money::operator ==(const Money& secondMoney) const {
	return (dollars == secondMoney.dollars && cents == secondMoney.cents);
}
const bool Money::operator !=(const Money& secondMoney) const {
	return ( dollars != secondMoney.getDollars() || cents != secondMoney.getCents() );
}
const bool Money::operator >=(const Money& secondMoney) const {
	return (dollars >= secondMoney.getDollars() || cents >= secondMoney.getCents() );
}
const bool Money::operator <=(const Money& secondMoney) const {
	return (dollars <= secondMoney.getDollars() || cents <= secondMoney.getCents());
}
const bool Money::operator >(const Money& secondMoney) const {
	return (dollars >= secondMoney.getDollars() && cents > secondMoney.getCents());
}
const bool Money::operator <(const Money& secondMoney) const {
	return (dollars <= secondMoney.getDollars() && cents < secondMoney.getCents());
}
