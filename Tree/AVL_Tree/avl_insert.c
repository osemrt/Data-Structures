#include "header_files/declarations.h"

Node* avl_insert(Node* root, int data) {

	if (root == NULL) {
		root = createNode(data);
	}
	else {

		if (root->data < data) {
			root->right = avl_insert(root->right, data);
		}
		else {
			root->left = avl_insert(root->left, data);
		}

		root->height = nodeHeight(root);

		if (balanceFactor(root) == 2 && balanceFactor(root->left) == 1) {
			root = LLRotation(root);
		}
		else if (balanceFactor(root) == 2 && balanceFactor(root->left) == -1) {
			root = LRRotation(root);
		}
		else if (balanceFactor(root) == -2 && balanceFactor(root->right) == 1) {
			root = RLRotation(root);
		}
		else if (balanceFactor(root) == -2 && balanceFactor(root->right) == -1) {
			root = RRRotation(root);
		}

	}

	return root;


}