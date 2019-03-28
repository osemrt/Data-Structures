#include "declarations.h"

/**
*	Wraps over print 2D function
*	@param int arr[] elements in the tree
*	@param int size the number of nodes in the tree
*/


void print2DUtil(int arr[], int size) {
	if (size == 0) {
		printf("Empty!");
		return;
	}

	print2D(arr, size, DEFAULT_ROOT_INDEX, 0);
}

/**
*	Prints a tree in two-dimensional
*	@param int arr[] elements in the tree
*	@param int size the number of nodes in the tree
*	@param int root the root index of a tree that will print
*	@param int totalSpace the sum of all space to print a line
*/

void print2D(int arr[], int size, int root, int totalSpace) {

	
	if (root >= size)
		return;

	totalSpace += SPACE;
	int right = root * 2 + 2;

	print2D(arr, size, right, totalSpace);

	for (int i = SPACE; i < totalSpace; i++) {
		printf("%c", ' ');
	}

	printf("%d\n", arr[root]);
	
	int left = root * 2 + 1;
	print2D(arr, size, left, totalSpace);

}


/**
*	Prints a heap tree in level-order fashion
*	@param int arr[] elements in the tree
*	@param int size the number of nodes in the tree
*/
void printArray(int arr[], int size) {

	for (int i = 0; i < size; i++)
		printf("%d ", arr[i]);

}