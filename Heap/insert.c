#include "declarations.h"

/**
*	Inserts an element to the array without breaking the structure of the max heap
*	@param int arr[] the elements of the heap
*	@param int* size a pointer that holds the number of elements in the array
*	@param int value will be added
*	@return INT_MAX(the array is full) or the inserted value
*/

int insertMax(int arr[], int* size, int value) {

	if (*size > MAX)
		return INT_MIN;

	int n = *size;
	arr[n] = value;
	++(*size);

	int parent = (n - 1) / 2;

	while ((n >= 1) && (value > arr[parent])) {
		arr[n] = arr[parent];
		n = parent;
		parent = (parent - 1) / 2;
	}
	arr[n] = value;

	return value;
}