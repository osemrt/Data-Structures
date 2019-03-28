#include "declarations.h"

/**
*	Returns an index is the biggest one between the children of the given tree
*	@param int arr[] the array of all nodes in the heap
*	@param int size the number of elements in the tree
*	@param int root the index of the root element in the given tree
*	@return int zero(no children) or non-zero(two or one children)
*/

int findBigChild(int arr[], int size, int root) {

	int left = root * 2 + 1;
	int right = root * 2 + 2;

	if (right < size) {				//two children
		return arr[left] < arr[right] ? right : left;
	}
	else if (left < size) {			//only left child
		return left;
	}
	else {							//no child
		return 0;
	}
}
