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
- 13!�̻󿡼� ���� �̻��ϰ� ������ ������ 
int �ڷ����� ũ���� 8����Ʈ�� ��� �����÷ο찡 �߻��߱� �����̴�.
32!���� ���ڱ� ������ ������ ������ ������ ��� ��ȣ��Ʈ�� 1�� �Ǿ��� ������ ������ ������ ���̴�.

- Ʋ������ ������ �ʰ� �Ϸ��� ���丮���� ��������
1. �� ���� �� �ڸ��� ���� �ɰ��� ���� �迭�� �ΰ� �����Ѵ�.
2. �� �迭�� ���Ͽ� ����� �迭�� �����Ѵ�.
3. �� �� ������ �ݺ��Ѵ�.
4. �迭�� �ε���0���� �����ŭ ����Ѵ�.
�̷��� �Ѵٸ� �迭�� ũ�⸦ ũ�� ������ ����� ū�������� ���� �������� ���� �� ����.
*/