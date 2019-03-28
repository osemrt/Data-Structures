#include "declarations.h"

/**
*	Takes an unsorted array and sorts it in ascending order [O(nlogn)]
*	@param int arr[] the elements of the heap tree
*	@param int size the number of nodes in the heap tree
*/

void maxHeapSort(int arr[], int size) {

	if (size < 1)
		return;

	createMax(arr, size);
	int dummy = size;
	for (int i = 0; i < dummy; i++) {
		deleteMax(arr, size--);

	}
}








