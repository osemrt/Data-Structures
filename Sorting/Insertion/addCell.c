#include "declarations.h"

/**
*	Adds a cell to a dynamic array
*	@param int* arr holds the address of the array
*	@param int* size the address of the array size
*	@return NULL or new array address
*/

int addCell(int* arr, int* size) {
	int* temp = arr;
	arr = (int*)realloc(arr, sizeof(int) * (*size + 1));
	++*size;
	return arr;
}