#include <iostream>

using namespace std;

int main() {
	int input = 100;
	int temp;
	int ans;

	while (input != 0) {
		cout << "정수 값을 입력하세요(0에서 종료) : ";
		cin >> input;
		if (input == 0) {
			break;
		}
		temp = input;
		while (temp != 0) {
			if (temp / 10 == 0) {
				ans = temp;
			}
			temp /= 10;
		}
		cout << "제일 큰 자리수 : " << ans << endl;
	}
	cout << "종료";
	return 0;
}