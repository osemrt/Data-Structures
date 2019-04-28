#include "header_files/declarations.h"

/**
*	Sorts the given array in the ascending order or descending order
*	@param int arr[] the array that will be sorted
*	@param int size the number of elements in the array
*/

void quickSort(int arr[], int first, int last) {

	if (last > first) {
		int pivotIndex = partition(arr, first, last);
		quickSort(arr, first, pivotIndex - 1);
		quickSort(arr, pivotIndex + 1, last);
	}

}