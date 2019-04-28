#include "header_files/declarations.h"

/**
*	Returns the address of the max node in the given BST tree
*	@param NODE* root the adress of the tree
*	@return NODE* the address of the max_node or NULL (to show the error)
*/

NODE* findMax(NODE* root) {

	if (root == NULL) {
		return NULL;
	}
	else if (root->right == NULL) {
		return root;
	}
	else {
		return findMax(root->right);
	}

}