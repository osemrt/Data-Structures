#include "declarations.h"

/**
*	Sorts the given array in the ascending order or descending order
*	@param int* arr holds the address of the array
*	@param int size the number of elements in the array
*	@param int order shows how the array must be sorted
*/

void shellSort(int* arr, int size, int order) {

	int i, j, gap, temp;
	switch (order)
	{
	case ASCENDING_ORDER:
		for (gap = size / 2; gap >= 1; gap /= 2) {

			for (i = gap; i < size; i++) {
				temp = arr[i];
				j = i - gap;

				while ((j >= 0) && (temp > arr[j])) {
					arr[j + gap] = arr[j];
					j = j - gap;
				}
				arr[j + gap] = temp;
			}

		}
		break;
	case DESCENDING_ORDER:
		for (gap = size / 2; gap >= 1; gap /= 2) {

			for (i = gap; i < size; i++) {
				temp = arr[i];
				j = i - gap;

				while ((j >= 0) && (temp < arr[j])) {
					arr[j + gap] = arr[j];
					j = j - gap;
				}
				arr[j + gap] = temp;
			}

		}
		break;
	}
}