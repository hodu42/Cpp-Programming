#include <iostream>
using namespace std;

int main() {
	double input = 10;
	int intAns;
	double doubleAns;

	while (input != 0) {
		cout << "�ε��Ҽ��� ���� �Է��ϼ���(0���� ����) : ";
		cin >> input;
		if (input == 0) {
			break;
		}
		intAns = int(input);
		doubleAns = input + (-1 * intAns);

		cout << "������: " << intAns << " �Ҽ����� : " << doubleAns << "\n";
	}

	cout << "����";

	return 0;
}