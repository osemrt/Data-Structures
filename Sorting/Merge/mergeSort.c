#include "header_files/declarations.h"

/**
*	Sorts the given array in the ascending order or descending order
*	@param int* arr holds the address of the array
*	@param int size the number of elements in the array
*/

void mergeSort(int* arr, int l, int h) {

	if (h > l) {
		int mid = (l + h) / 2;
		mergeSort(arr, l, mid);
		mergeSort(arr, mid + 1, h);
		merge(arr, l, mid, h);
	}


}