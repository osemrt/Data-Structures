#include "header_files/declarations.h"

/**
*	Inserts a node to the given tree
*	@param NODE* root the address of the root
*	@param int data the value of the node that will be created
*	@return the address of the root
*/

NODE* insert(NODE* root, int data) {


	if (root == NULL) {
		root = createNode(data);
	}
	else if (root->data > data) {
		root->left = insert(root->left, data);
	}
	else {
		// if (root->data <= data)
		root->right = insert(root->right, data);
	}
	
	return root;
}



/**
// by returning nothing
void insert(NODE** pointerToRoot, int data) {
	NODE* root = *pointerToRoot;

	if (root == NULL) {
		root = getNewNode(data);
	}
	else if (data >= root->data) {
		insert(&(root->right), data);
	}
	else {
		insert(&(root->left), data);
	}

	*pointerToRoot = root;
}

*/


/**
//Without using recursion
void insert(NODE** pointerToRoot, int data) {

	NODE* root = *pointerToRoot;
	if (root == NULL) {
		*pointerToRoot = createNode(data);
		return;
	}

	NODE* parent = NULL;
	while (root != NULL) {

		parent = root;
		if (root->data > data) {
			root = root->left;
		}
		else {
			// if(root->data <= data)
			root = root->right;
		}
	}

	if (parent->data > data)
		parent->left = createNode(data);
	else
		parent->right = createNode(data);

}

*/