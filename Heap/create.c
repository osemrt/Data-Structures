#include "declarations.h"

/**
*	Creates a heap array by wrapping over the insertMax function, complexity: O(NlogN)
*	@param int arr[] all nodes in tree
*	@param size the number of elements in the array
*/

void createMax(int arr[], int size) {
	int dummy = size;
	size = 1;
	for (int i = 1; i < dummy; i++) {
		insertMax(arr, &size, arr[i]);
	}

}
