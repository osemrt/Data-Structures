#include "declarations.h"

/**
*	Creates a array with the given size
*	@param int size an integer for the array size
*	@return the address of the created array or NULL when the creating fails
*/

char* createArray(int size) {
	int* arr = (int*)malloc(sizeof(int) * size);
	return arr;
}