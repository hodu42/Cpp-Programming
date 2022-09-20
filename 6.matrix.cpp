#include <iostream>

using namespace std;
const int MATSIZE = 3;

void transpose(const int arr[][MATSIZE], int transposed[][MATSIZE]);
void sum(const int arr1[][MATSIZE], const int arr2[][MATSIZE], int sum[][MATSIZE]);
void multiply(const int arr1[][MATSIZE], const int arr2[][MATSIZE], int multiply[][MATSIZE]);
void printMat(const int matrix[][MATSIZE]);

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
	

	cout << "MATRIX 1 Transpose" << endl;
	printMat(transposeMat1);
	cout << "MATRIX 2 Transpose" << endl;
	printMat(transposeMat2);
	cout << "Sum" << endl;
	printMat(sumMat);
	cout << "Multiplication" << endl;
	printMat(multiplyMat);

	return 0;
}

void transpose(const int arr[][MATSIZE], int transposed[][MATSIZE]) {
	for (int y = 0; y < MATSIZE; y++) {
		for (int x = 0; x < MATSIZE; x++) {
			transposed[y][x] = arr[x][y];
		}
	}
}

void sum(const int arr1[][MATSIZE], const int arr2[][MATSIZE], int sum[][MATSIZE]) {
	for (int y = 0; y < MATSIZE; y++) {
		for (int x = 0; x < MATSIZE; x++) {
			sum[y][x] = arr1[y][x] + arr2[y][x];
		}
	}
}

void multiply(const int arr1[][MATSIZE], const int arr2[][MATSIZE], int multiply[][MATSIZE]) {
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

void printMat(const int matrix[][MATSIZE]) {
	for (int y = 0; y < MATSIZE; y++) {
		cout << "|";
		for (int x = 0; x < MATSIZE; x++) {
			printf("%2d", matrix[y][x]);
		}
		cout << "|" << endl;
	}
	cout << endl;
}