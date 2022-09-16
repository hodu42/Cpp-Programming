#include <iostream>

using namespace std;
void showDigit(int n), showReverseDigit(int n);

int main() {
	int input = 2;
	while (input != 0) {
		cout << "Input an integer(ends when 0 is entered) : ";
		cin >> input;
		if (input != 0) {
			cout << "Backward :";
			showDigit(input);
			cout << endl;
			cout << "Forward :";
			showReverseDigit(input);
			cout << endl;
		}
	}
	cout << "== END ==";
}


void showDigit(int n) {
	if (n == 0) {
		return;
	}
	cout << " " << n % 10;
	showDigit(n / 10);
}
void showReverseDigit(int n) {
	if (n == 0) {
		return;
	}
	showReverseDigit(n / 10);
	cout << " " << n % 10;
}