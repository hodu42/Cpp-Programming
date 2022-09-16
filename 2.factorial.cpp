#include <iostream>

using namespace std;
int repeat(int input);
int recur(int input);


int main() {
	int input = -1;
	while (input != 0) {
		cout << "Input an integer(ends when 0 is entered) : ";
		cin >> input;
		if (input != 0) {
			cout << "Result using iteration = " << repeat(input) << endl;
			cout << "Result using recursive = " << recur(input) << endl;
		}
	}

	cout << "== END ==";
	return 0;
}

int repeat(int input) {
	int result = 1;
	for (int i = input; i > 0; i--) {
		result *= i;
	}
	return result;
}

int recur(int input) {
	if (input == 0) {
		return 1;
	}
	return input * recur(input - 1);
}