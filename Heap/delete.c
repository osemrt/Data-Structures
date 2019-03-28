#include "declarations.h"

/**
*	Wraps over the deleteMax function
*	@param int arr[] stores the all node in heap tree
*	@param int size the number of nodes in the heap tree
*	@return int an error indicator(INT_MIN) or deleted node
*/

int deleteMaxUtil(int arr[], int* size) {
	int max = deleteMax(arr, *size);
	--* size;
	return max;
}

/**
*	deletes the root element in the heap, it does not change the value of the given size!
*	@param int arr[] stores the all node in heap tree
*	@param int size the number of nodes in the heap tree
*	@return int an error indicator(INT_MIN) or deleted node
*/

int deleteMax(int arr[], int size) {

	if (size < 1)
		return INT_MIN;

	int i = 0;
	int dummy = size;
	int max = arr[i];
	swap(arr, i, size - 1);
	size--;

	int bigChild = findBigChild(arr, size, i);

	while ((bigChild) && (arr[bigChild] > arr[i])) {
		swap(arr, i, bigChild);
		i = bigChild;
		bigChild = findBigChild(arr, --dummy, bigChild);

	}

	return max;
}


/**
*	deletes the root element in the heap, it changes the value of the given size!
*	@param int arr[] stores the all node in heap tree
*	@param int size the number of nodes in the heap tree
*	@return int an error indicator(INT_MIN) or deleted node
*/

//int deleteMax(int arr[], int* size) {
//
//	if (*size < 1)
//		return INT_MIN;
//
//	int max = arr[0];
//	int i = 0;
//	int temp;
//
//	--* size;
//
//	arr[0] = arr[*size];
//	int bigChild = findBigChild(arr, *size, i);
//
//
//	while (bigChild && (arr[bigChild] > arr[i])) {
//		swap(arr, i, bigChild);
//		i = bigChild;
//		bigChild = findBigChild(arr, *size, bigChild);
//	}
//	 
//	return max;
//}
