#include "header_files/declarations.h"

/**
*	Deletes a specified node from the given BST tree
*	@param NODE* root the address of the tree
*	@param int data the value of the node that will be deleted
*	@return the address of the tree created with copy-by-value
*/

NODE* delete(NODE* root, int data) {

	if (root == NULL) {
		return NULL;
	}
	else if (root->data > data) {
		root->left = delete(root->left, data);
	}
	else if (root->data < data) {
		root->right = delete(root->right, data);
	}
	else {

		//no child
		if (root->left == NULL && root->right == NULL) {
			free(root);
			root = NULL;
		}
		//only right child
		else if (root->left == NULL) {
			NODE* dummy = root;
			root = root->right;
			free(dummy);
		}
		//only left child
		else if (root->right == NULL) {
			NODE* dummy = root;
			root = root->left;
			free(dummy);
		}
		//2 children
		else {
			// if(delNode->left!=NULL && delNode->right!=NULL)
			NODE* inorderPredecessor = findMax(root->left);
			root->data = inorderPredecessor->data;
			root->left = delete(root->left, inorderPredecessor->data);
		}

	}

	return root;

}

