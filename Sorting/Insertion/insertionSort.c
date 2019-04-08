#include "declarations.h"

/**
*	Sorts the given array in the ascending order or descending order
*	@param int* arr holds the address of the array
*	@param int size the number of elements in the array
*	@param int order shows how the array must be sorted
*/

void insertionSort(int* arr, int size, int order) {

	int i, j, temp;

	switch (order)
	{
	case ASCENDING_ORDER:
		for (i = 1; i < size; i++) {

			temp = arr[i];
			j = i - 1;
			while ((j >= 0) && (temp < arr[j])) {
				swap(arr, j, j + 1);
				j--;
			}


		}
		break;

	case DESCENDING_ORDER:
		for (i = 1; i < size; i++) {

			temp = arr[i];
			j = i - 1;
			while ((j >= 0) && (temp > arr[j])) {
				swap(arr, j, j + 1);
				j--;
			}


		}
		break;

	}


}