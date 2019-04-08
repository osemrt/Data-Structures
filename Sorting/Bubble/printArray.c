#include "declarations.h"

/**
*	Prints the given array
*	@param int* arr holds the address of the array
*	@param int size the number of elements in the array
*/

void printArray(int* arr, int size) {
	int i;

	printf("\n[ ");
	if (arr != NULL) {
		for (i = 0; i < size; i++) {
			printf("%d ", arr[i]);
		}
	}	
	printf("]\n");

}