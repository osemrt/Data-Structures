#include "declarations.h"

/**
*	Fiils the given array with random numbers
*	@param int* arr holds the address of the array
*	@param int size the number of elements in the array
*	@return the address of the filled array or NULL
*/


char* fillArray(int* arr, int size) {
	int i;
	if (arr != NULL) {
		for (i = 0; i < size; i++) {
			arr[i] = rand() % RANGE;
		}
	}
	return arr;
}