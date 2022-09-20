#include <iostream>

using namespace std;
const int MATSIZE = 3;

void transpose(int arr[][MATSIZE], int transposed[][MATSIZE]);
void sum(int arr1[][MATSIZE], int arr2[][MATSIZE], int sum[][MATSIZE]);
void multiply(int arr1[][MATSIZE], int arr2[][MATSIZE], int multiply[][MATSIZE]);
void printMat(int transpose[][MATSIZE], int transpose2[][MATSIZE], int sum[][MATSIZE], int multiply[][MATSIZE]);

int main() {
	
	int mat1[][MATSIZE] =
	{
		{1, 2, 3},
		{4, 5, 6},
		{7, 8, 9}
	};

	int mat2[][MATSIZE] =
	{
		{1, -1, 0},
		{0, -1, 1},
		{-1, 1, 0}
	};
	
	int transposeMat1[MATSIZE][MATSIZE] = { 0 };
	int transposeMat2[MATSIZE][MATSIZE] = { 0 };
	int sumMat[MATSIZE][MATSIZE] = { 0 };
	int multiplyMat[MATSIZE][MATSIZE] = { 0 };

	transpose(mat1, transposeMat1);
	transpose(mat2, transposeMat2);
	sum(mat1, mat2, sumMat);
	multiply(mat1, mat2, multiplyMat);
	printMat(transposeMat1, transposeMat2, sumMat, multiplyMat);

	return 0;
}

void transpose(int arr[][MATSIZE], int transposed[][MATSIZE]) {
	for (int y = 0; y < MATSIZE; y++) {
		for (int x = 0; x < MATSIZE; x++) {
			transposed[y][x] = arr[x][y];
		}
	}
}

void sum(int arr1[][MATSIZE], int arr2[][MATSIZE], int sum[][MATSIZE]) {
	for (int y = 0; y < MATSIZE; y++) {
		for (int x = 0; x < MATSIZE; x++) {
			sum[y][x] = arr1[y][x] + arr2[y][x];
		}
	}
}

void multiply(int arr1[][MATSIZE], int arr2[][MATSIZE], int multiply[][MATSIZE]) {
	for (int i = 0; i < MATSIZE; i++) {
		for (int j = 0; j < MATSIZE; j++) {
			int sum = 0;
			for (int k = 0; k < MATSIZE; k++) {
				sum += arr1[i][k] * arr2[k][j];
			}
			multiply[i][j] = sum;
		}
	}
	
}

void printMat(int transpose1[][MATSIZE], int transpose2[][MATSIZE], int sum[][MATSIZE], int multiply[][MATSIZE]) {
	cout << "MATRIX 1 Transpose" << endl;
	for (int y = 0; y < MATSIZE; y++) {
		cout << "|";
		for (int x = 0; x < MATSIZE; x++) {
			printf("%2d", transpose1[y][x]);
		}
		cout << "|" << endl;
	}
	cout << endl;

	cout << "MATRIX 2 Transpose" << endl;
	for (int y = 0; y < MATSIZE; y++) {
		cout << "|";
		for (int x = 0; x < MATSIZE; x++) {
			printf("%2d", transpose2[y][x]);
		}
		cout << "|" << endl;
	}
	cout << endl;

	cout << "Sum" << endl;
	for (int y = 0; y < MATSIZE; y++) {
		cout << "|";
		for (int x = 0; x < MATSIZE; x++) {
			printf("%2d", sum[y][x]);
		}
		cout << "|" << endl;
	}
	cout << endl;

	cout << "Multiplication" << endl;
	for (int y = 0; y < MATSIZE; y++) {
		cout << "|";
		for (int x = 0; x < MATSIZE; x++) {
			printf("%2d", multiply[y][x]);
		}
		cout << "|" << endl;
	}
	cout << endl;
}