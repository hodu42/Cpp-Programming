#include <iostream>

using namespace std;

int main() {
	int up, down, blank;
	up = 100;

	while (up != 0) {
		cout << "윗변과 밑변 크기 :";
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
			cout << "두 값이 모두 홀수이거나 짝수여야 함" << endl << endl;
		}
	}
	cout << "종료합니다.";

	return 0;
}