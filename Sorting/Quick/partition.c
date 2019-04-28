#include "header_files/declarations.h"

int partition(int arr[], int first, int last) {
	
	int j = first;
	int pivot = arr[last];
	
	for (int i = first; i < last; i++) {
		if (arr[i] < pivot) {
			swap(arr, j++, i);
		}
	}

	swap(arr, j, last);

	return j;
}


/*
//Other way to get pivotIndex

int partition(int arr[], int first, int last) {

	int pivot = arr[first];
	int i = first;
	int j = last + 1;

	do {

		do {
			i++;
		} while (i < j && pivot < arr[i]);

		do {
			j--;
		} while (i < j && pivot >= arr[j]);

		swap(arr, i, j);

	} while (i <= j);


	swap(arr, i, j);				// to undo the last swap
	swap(arr, first, j);

	return j;

}

*/
