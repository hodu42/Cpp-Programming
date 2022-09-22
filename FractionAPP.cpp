#include <iostream>
#include "Fraction.h"

int main()			//main은 제출 XXXXXXXXXXXXXXXX
{
	Fraction f1, f2(2, 5), f3; // f2 = 2/5
	f1.setDenom(3); // Demon = 분모
	f1.setNumer(2); // Numer = 분자
	f3 = f1.add(f2); // f1 = 2/3
	f3.print();
	return 0;
}

