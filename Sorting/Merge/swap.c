#include "header_files/declarations.h"

/** swaps two values in the given array
*	@param int arr[] a collection of the elements
*	@param int index1 the index of value1 in the array
*	@param int index2 the index of value2 in the array
*	@return to show the successful swapping operation for TRUE, otherwise FALSE
*/

int swap(int arr[], int index1, int index2) {

	if (index1 < 0 || index2 < 0)
		return FALSE;

	int temp = arr[index1];
	arr[index1] = arr[index2];
	arr[index2] = temp;

	return TRUE;
}