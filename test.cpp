#include <iostream>

using namespace std;
void makeArr(int input, int arr[], int& size);
void printArr(int arr[], int size);


int main() {
	int a = 1234, b = 5678;
	int arr1[5000] = { 0 };
	int arr2[5000] = { 0 };
	int size1 = 0;
	int size2 = 0;
	
	makeArr(a, arr1, size1);
	makeArr(b, arr2, size2);
	printArr(arr1, size1);
	printArr(arr2, size2);
	return 0;
}

void makeArr(int input, int arr[], int& size) {
	for (int i = input; i > 0; i /= 10, size++) {
		arr[size] = i % 10;
	}
}

void printArr(int arr[], int size) {
	for (int i = size - 1; i >= 0; i--) {
		cout << arr[i];
	}
	cout << endl;
}

void multiply(int arr1[], int arr2[],int resultArr[], int size1, int size2, int& size3) {
	int up = 0, result = 0;
	for (int i = 0; i < size2; i++) {
		up = 0;
		for (int j = 0; j < size1; j++, size3++) {
			result = arr1[j] * arr2[i] + up;
			if (result >= 10) {
				up = result / 10;
			}
			resultArr[size3] = result % 10;
		}
	}
}