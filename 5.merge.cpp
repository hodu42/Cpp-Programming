#include <iostream>

using namespace std;

bool getArray(int arr[], int size);
bool isNondescending(int arr[], int size);

int main() {
	const int ARR1_SIZE = 5, ARR2_SIZE = 5, MERGED_SIZE = 10;
	int arr1[ARR1_SIZE] = {}, arr2[ARR2_SIZE] = {}, merged[MERGED_SIZE] = {};

	while (getArray(arr1, ARR1_SIZE) && getArray(arr2, ARR2_SIZE)) {

		int index1 = 0, index2 = 0, resultIndex = 0;

		while (index1 < ARR1_SIZE && index2 < ARR2_SIZE) {
			if (arr1[index1] <= arr2[index2]) {
				merged[resultIndex] = arr1[index1];
				index1++, resultIndex++;
			}
			else {
				merged[resultIndex] = arr2[index2];
				index2++, resultIndex++;
			}
		}

		if (index1 == ARR1_SIZE) {
			for (int i = index2; i < ARR2_SIZE; i++, resultIndex++) {
				merged[resultIndex] = arr2[i];
			}
		}
		else if (index2 == ARR2_SIZE) {
			for (int i = index1; i < ARR1_SIZE; i++, resultIndex++) {
				merged[resultIndex] = arr1[i];
			}
		}

		cout << "Merged 10 non-descending integers :";

		for (int i = 0; i < MERGED_SIZE; i++) {
			cout << " " << merged[i];
		}

		cout << endl;
	}

	cout << "Ends with numbers with non-descending order" << endl;
	cout << "== END ==";
	return 0;
}

bool getArray(int arr[], int size) {
	cout << "Enter 5 non-descending integers : ";
	for (int i = 0; i < size; i++) {
		cin >> arr[i];
	}
	return isNondescending(arr, size);
}

bool isNondescending(int arr[], int size) {
	for (int i = 0; i < size-1; i++) {
		if (arr[i] > arr[i + 1]) {
			return 0;
		}
	}
	return 1;
}