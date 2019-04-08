#include "declarations.h"

/**
*	Sorts the given array in the ascending order or descending order
*	@param int* arr holds the address of the array
*	@param int size the number of elements in the array
*	@param int order shows how the array must be sorted
*/

void bubbleSort(int* arr, int size, int order) {
	int i, j;

	switch (order)
	{
	case ASCENDING_ORDER:
		for (i = 0; i < size - 1; i++) {
			for (j = 0; j < size - 1 - i; j++) {
				if (arr[j + 1] < arr[j])
					swap(arr, j + 1, j);
			}
		}
		break;
	case DESCENDING_ORDER:
		for (i = 0; i < size - 1; i++) {
			for (j = 0; j < size - 1 - i; j++) {
				if (arr[j + 1] > arr[j])
					swap(arr, j + 1, j);
			}
		}
		break;
	}

}