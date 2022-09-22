#include <iostream>
#include "Matrix.h"
using namespace std;

Matrix::Matrix() {
	initialization();
};
int Matrix::getValue(int y, int x) const {
	return mat[y][x];
}
void Matrix::setValue(int y, int x, int value) {
	mat[y][x] = value;
}
void Matrix::initialization() {
	for (int y = 0; y < matSize; y++) {
		for (int x = 0; x < matSize; x++) {
			setValue(y, x, 0);
		}
	}
}
void Matrix::read() {
	cout << "Input: ";
	for (int y = 0; y < matSize; y++) {
		for (int x = 0; x < matSize; x++) {
			cin >> mat[y][x];
		}
	}
};
void Matrix::print() const {
	for (int y = 0; y < matSize; y++) {
		cout << "|";
		for (int x = 0; x < matSize; x++) {
			printf("%2d", getValue(y, x));
		}
		cout << "|" << endl;
	}
	cout << endl;
};
Matrix Matrix::add(Matrix mat2) const {
	Matrix addMat;
	for (int y = 0; y < matSize; y++) {
		for (int x = 0; x < matSize; x++) {
			addMat.setValue(y, x, getValue(y, x) + mat2.getValue(y, x) );
		}
	}
	return addMat;
};
Matrix Matrix::multi(Matrix mat2) const {
	Matrix multiplyMat;
	for (int i = 0; i < matSize; i++) {
		for (int j = 0; j < matSize; j++) {
			int sum = 0;
			for (int k = 0; k < matSize; k++) {
				sum += getValue(i, k) * mat2.getValue(k, j);
			}
			multiplyMat.setValue(i, j, sum);
		}
	}
	return multiplyMat;
};