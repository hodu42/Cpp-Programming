#include <iostream>

using namespace std;
int repeat(int input);
int recur(int input);
int getInput(int& input);

int main() {
	int input = 0;
	while (getInput(input)) {
			cout << "Result using iteration = " << repeat(input) << endl;
			cout << "Result using recursive = " << recur(input) << endl;
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
	if (input == 1) {
		return 1;
	}
	return input * recur(input - 1);
}

int getInput(int& input) {
	cout << "Input an integer(ends when 0 is entered) : ";
	cin >> input;
	return input;
}

/*
- 13!이상에서 값이 이상하게 나오는 이유는 
int 자료형의 크기인 8바이트를 벗어나 오버플로우가 발생했기 때문이다.
32!에서 갑자기 음수가 나오는 이유는 범위를 벗어나 부호비트가 1이 되었기 때문에 음수가 나오는 것이다.

- 틀린값이 나오지 않게 하려면 팩토리얼의 곱셈에서
1. 두 수를 각 자리수 별로 쪼개서 정수 배열을 두개 생성한다.
2. 두 배열을 곱하여 결과를 배열에 저장한다.
3. 위 두 과정을 반복한다.
4. 배열의 인덱스0부터 사이즈만큼 출력한다.
이렇게 한다면 배열의 크기를 크게 잡으면 상당히 큰수까지의 값이 문제없이 나올 것 같다.
*/