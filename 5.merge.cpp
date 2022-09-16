#include <iostream>

using namespace std;

int main() {
	int arr1Size = 5, arr2Size = 5, mergedSize = 10;
	int arr1[5] = {}, arr2[5] = {}, merged[10] = {};

	while (1) {
		getArray(arr1, arr1Size, arr2, arr2Size);
		mergeArray(merged, mergedSize, arr1, arr1Size, arr2, arr2Size);
	}
	
	return 0;
}

void getArray(int arr1[], int size1 , int arr2[], int size2) {
	cout << "Enter 5 non-descending integers :";
	cin >> arr1[0] >> arr1[1] >> arr1[2] >> arr1[3] >> arr1[4];
	if (isNondescending(arr1, size1)) {
		cout << "Ends with numbers with non-descending order" << endl;
		return;
	}
	cout << "Enter 5 non-descending integers :";
	cin >> arr2[0] >> arr2[1] >> arr2[2] >> arr2[3] >> arr2[4];
	if (isNondescending(arr2, size2)) {
		cout << "Ends with numbers with non-descending order" << endl;
		return;
	}
}

void mergeArray(int result[], int resultSize , int arr1[], int size1, int arr2[], int size2) {
	int index1 = 0, index2 = 0, resultIndex = 0;
	while (index1 != size1 - 1 || index2 != size2 - 1) {
		if (arr1[index1] >= arr2[index2]) {
			result[resultIndex] = arr1[index1];
			index1++, resultIndex++;
		}
		else {
			result[resultIndex] = arr2[index2];
			index2++, resultIndex++;
		}
	}
	if (index1 == size1 - 1) {
		for (int i = index2; i < size2; index2++, resultIndex++) {
			result[resultIndex] = arr2[i];
		}
	}
	else if (index2 == size2 -1) {
		for (int i = index1; i < size1; index1++, resultIndex++) {
			result[resultIndex] = arr1[i];
		}
	}
	cout << "Merged 10 non-descending integers :";
	for (int i = 0; i < resultSize; i++) {
		cout << " " << result[i];
	}
	cout << endl;
}

bool isNondescending(int arr[], int size) {
	for (int i = 0; i < size-1; i++) {
		if (arr[i] > arr[i + 1]) {
			return 0;
		}
	}
	return 1;
}