#include "declarations.h"

/**
*	Wraps over heapify function and creates a heap faster than create-heap function, complexity: O(N)
*	@param int arr[] all nodes in tree
*	@param size the number of elements in the array
*/

void heapifyUtil(int arr[], int size) {
	
	for (int i = size - 1; i >= 0; i--)
		heapify(arr, size, i);

}

void heapify(int arr[], int size, int root) {

	int temp;
	int bigChild = findBigChild(arr, size, root);

	while ((bigChild) && (arr[bigChild] > arr[root])) {
		swap(arr, root, bigChild);
		root = bigChild;
		bigChild = findBigChild(arr, size, bigChild);
	}

}
