#include <iostream>

using namespace std;

bool getArray(int arr1[], int size1, int arr2[], int size2);
bool isNondescending(int arr[], int size);

int main() {
	const int arr1Size = 5, arr2Size = 5, mergedSize = 10;
	int arr1[arr1Size] = {}, arr2[arr2Size] = {}, merged[mergedSize] = {};

	while (getArray(arr1, arr1Size, arr2, arr2Size)) {

		int index1 = 0, index2 = 0, resultIndex = 0;

		while (index1 < arr1Size && index2 < arr2Size) {
			if (arr1[index1] <= arr2[index2]) {
				merged[resultIndex] = arr1[index1];
				index1++, resultIndex++;
			}
			else {
				merged[resultIndex] = arr2[index2];
				index2++, resultIndex++;
			}
		}

		if (index1 == arr1Size) {
			for (int i = index2; i < arr2Size; i++, resultIndex++) {
				merged[resultIndex] = arr2[i];
			}
		}
		else if (index2 == arr2Size) {
			for (int i = index1; i < arr1Size; i++, resultIndex++) {
				merged[resultIndex] = arr1[i];
			}
		}

		cout << "Merged 10 non-descending integers :";

		for (int i = 0; i < mergedSize; i++) {
			cout << " " << merged[i];
		}

		cout << endl;
	}

	cout << "Ends with numbers with non-descending order" << endl;
	cout << "== END ==";
	return 0;
}

bool getArray(int arr1[], int size1, int arr2[], int size2) {
		cout << "Enter 5 non-descending integers : ";
		cin >> arr1[0] >> arr1[1] >> arr1[2] >> arr1[3] >> arr1[4];

		if (!isNondescending(arr1, size1)) {	
			return 0;
		}
		cout << "Enter 5 non-descending integers : ";
		cin >> arr2[0] >> arr2[1] >> arr2[2] >> arr2[3] >> arr2[4];

		if (!isNondescending(arr2, size2)) {
			return 0;
		}

		return 1;
}

bool isNondescending(int arr[], int size) {
	for (int i = 0; i < size-1; i++) {
		if (arr[i] > arr[i + 1]) {
			return 0;
		}
	}
	return 1;
}