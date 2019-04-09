#include "declarations.h"

/**
*	Sorts the given array in the ascending order or descending order
*	@param int* arr holds the address of the array
*	@param int size the number of elements in the array
*	@param int order shows how the array must be sorted
*/

void selectionSort(int* arr, int size, int order) {

	int i, j, min, max;

	switch (order)
	{
	case ASCENDING_ORDER:
		for (i = 0; i < size - 1; i++) {
			min = i;
			for (j = i; j < size; j++) {
				if (arr[j] < arr[min])
					min = j;
			}
			swap(arr, i, min);
		}
		break;
	case DESCENDING_ORDER:
		for (i = 0; i < size - 1; i++) {
			max = i;
			for (j = i; j < size; j++) {
				if (arr[j] > arr[max])
					max = j;
			}
			swap(arr, i, max);
		}
		break;
	}

}