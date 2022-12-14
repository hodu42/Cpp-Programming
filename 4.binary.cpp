#include <iostream>

using namespace std;

void binary(int input, short arr[]);
int getInput(int& input);

int main() {
	int input = 0;
	short result[32] = {};

	while (getInput(input)) {
		cout << "Binary number : ";
		binary(input, result);
	}
	cout << "== END ==";
}

void binary(int input, short arr[]) {
	int length = 0;
	for (int i = input; i > 0; i /= 2, length++) {
		arr[length] = i % 2;
	}
	for (int i = length-1; i >= 0; i--) {
		cout << arr[i];
	}
	cout << endl;
}

int getInput(int& input) {
	cout << "Input a decimal number(ends when 0 is entered) : ";
	cin >> input;
	return input;
}