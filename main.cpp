#include <iostream>
#include "Money.h"

using namespace std;

Money m1, m2, END_AMOUNT(0, 0);

int main() {
	while (m1.inputNreturn() != END_AMOUNT) {
		m2.inputNreturn(); // $0.00 could be input
		cout << m1.toString() << " + " << m2.toString() << " = " << (m1 + m2).toString();
		cout << m1.toString() << " - " << m2.toString() << " = " << (m1 - m2).toString();
		cout << m1.toString() << " == " << m2.toString() << " is ";
		if (m1 == m2) cout << "true" << endl;
		else cout << "false." << endl;
	}
	cout << "Stop with 0 0" << endl << " === END === " << endl;
}

