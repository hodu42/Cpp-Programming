#include <iostream>

using namespace std;

int main() {
	int input = 100;
	int temp;
	int ans;

	while (input != 0) {
		cout << "���� ���� �Է��ϼ���(0���� ����) : ";
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
		cout << "���� ū �ڸ��� : " << ans << endl;
	}
	cout << "����";
	return 0;
}