#include <iostream>
#include "Fraction.h"

int main()			//main�� ���� XXXXXXXXXXXXXXXX
{
	Fraction f1, f2(2, 5), f3; // f2 = 2/5
	f1.setDenom(3); // Demon = �и�
	f1.setNumer(2); // Numer = ����
	f3 = f1.add(f2); // f1 = 2/3
	f3.print();
	return 0;
}

