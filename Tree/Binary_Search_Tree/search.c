#include "header_files/declarations.h"

/**
*	Travels the tree to find a node that has the given qualification
*	@param NODE* root the address of the root 
*	@param int data the specified qualification
*	@return the address of the found node or NULL as an error indicator
*/

NODE* search(NODE* root, int data) {


	if (root == NULL) {
		return NULL;
	}
	else if (root->data == data) {
		return root;
	}
	else if (root->data > data) {
		return search(root->left, data);
	}
	else {
		//if (root->data < data)
		return search(root->right, data);
	}


}


/**
//Without using recursion
NODE* search(NODE* root, int data) {


	while (root != NULL) {
		if (root->data == data) {
			return root;
		}
		else if (root->data > data) {
			root = root->left;
		}
		else {
			//if (root->data < data)
			root = root->right;
		}

	}

	return root;
}
*/
