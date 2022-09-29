#include <string>
#pragma once

using namespace std;

class Money {
public:
	Money();
	Money(int, int);
	int getDollars() const;
	int getCents() const;
	void setDollars(int);
	void setCents(int);
	void inputNreturn();
	string toString() const;
	const bool operator ==(const Money&) const;
	const bool operator !=(const Money&) const;
	const bool operator >=(const Money&) const;
	const bool operator <=(const Money&) const;
	const bool operator >(const Money&) const;
	const bool operator <(const Money&) const;
private:
	int dollars;
	int cents;
	void setUnits();

};