#include <iostream>

using namespace std;

int main() {
	int up, down, blank;
	up = 100;

	while (up != 0) {
		cout << "������ �غ� ũ�� :";
		cin >> up >> down;
		if (up % 2 == down % 2) {
			if (up > down) {
				int temp = up;
				up = down;
				down = temp;
			}
			blank = (down - up) / 2;
			for (int i = blank, star = up; i >= 0; i--, star += 2) {
				for (int k = 0; k < i; k++) {
					cout << " ";
				}
				for (int j = 0; j < star; j++) {
					cout << "*";
				}
				cout << endl;
			}
			cout << endl;
		}
		else {
			cout << "�� ���� ��� Ȧ���̰ų� ¦������ ��" << endl << endl;
		}
	}
	cout << "�����մϴ�.";

	return 0;
}