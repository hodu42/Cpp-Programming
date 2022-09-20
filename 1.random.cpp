#include <iostream>

using namespace std;

int main() {
	srand(time(0));
	int input = -1;
	int val = rand() % 100 + 1;
	int cnt = 0;
	cout << "I have specified one natural number less than or equal to 100." << endl;

	while (input != val) {

		cout << "Guess the number and enter it : ";
		cin >> input;
		cnt++;
		if (input > val) {
			cout << "The number I specified is a number less than " << input << "." << endl;
		}
		else if (input < val) {
			cout << "The number I specified is a number greater than " << input << "." << endl;
		}
		cout << endl;
	}

	cout << "Got it!!! You've succeeded in the " << cnt << "th times!" << endl;
	return 0;
}