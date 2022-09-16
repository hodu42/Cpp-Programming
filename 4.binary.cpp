#include <iostream>

using namespace std;

void binary(int input, short arr[]);

int main() {
	int input = -1;
	short result[32] = {};

	while (input != 0) {
		cout << "Input a decimal number(ends when 0 is entered) : ";
		cin >> input;
		binary(input, result);


		cout << "Binary number : ";
		binary(input, result);
	}

	cout << "== END ==";

}
void binary(int input, short arr[]) {
	int length = 0;
	for (int i = input; input > 0; i / 2, length++) {
		arr[length] = i % 2;
	}
	for (int i = length; i >= 0; i--) {
		cout << arr[i];
	}

}