#include <iostream>, <ctime>

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

/*
srand()를 사용하지 않았을땐 프로그램을 아무리 재실행하여도 
42라는 숫자가 val에 들어갔지만 srand()를 사용하고는 
랜덤 값이 잘 들어가는 모습을 보였다. 
그 이유는 rand()는 프로그램이 생성될 때 값이 정해지기 때문이다.
그래서 srand()에 현재시간을 넣어 rand()에 사용될 seed 값을 준다.
그 seed 값이 현재 시간을 뜻하는 time(0)이므로 그것을 기반으로 한 랜덤한 값이 나오게 된다.
*/

