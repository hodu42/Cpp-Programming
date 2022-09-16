#include <iostream>
using namespace std;

int main() {
	double input = 10;
	int intAns;
	double doubleAns;

	while (input != 0) {
		cout << "부동소수점 값을 입력하세요(0에서 종료) : ";
		cin >> input;
		if (input == 0) {
			break;
		}
		intAns = int(input);
		doubleAns = input + (-1 * intAns);

		cout << "정수부: " << intAns << " 소수점부 : " << doubleAns << "\n";
	}

	cout << "종료";

	return 0;
}