#include "header_files/declarations.h"

Node* avl_delete(Node* root, int data) {

	if (root == NULL) {
		return NULL;
	}
	else if (root->data < data) {
		root->right = avl_delete(root->right, data);
	}
	else if (root->data > data) {
		root->left = avl_delete(root->left, data);
	}else{

		if (root->left == NULL && root->right == NULL) {
			free(root);
			root = NULL;
		}
		else if (root->right == NULL) {
			Node* tmp = root;
			root = root->left;
			free(tmp);
		}
		else if (root->left == NULL) {
			Node* tmp = root;
			root = root->right;
			free(tmp);
		}
		else {
			Node* minNode = findMin(root->right);
			root->data = minNode->data;
			root->right = avl_delete(root->right, minNode->data);
		}
	}

	if (root != NULL) {
		root->height = nodeHeight(root);

		if (balanceFactor(root) == 2 && balanceFactor(root->left) == -1) {
			root = L_1(root);
		}
		else if (balanceFactor(root) == 2 && balanceFactor(root->left) == 0) {
			root = L0(root);
		}
		else if (balanceFactor(root) == 2 && balanceFactor(root->left) == 1) {
			root = L1(root);
		}
		else if (balanceFactor(root) == -2 && balanceFactor(root->right) == -1) {
			root = R_1(root);
		}
		else if (balanceFactor(root) == -2 && balanceFactor(root->right) == 0) {
			root = R0(root);
		}
		else if (balanceFactor(root) == -2 && balanceFactor(root->right) == 1) {
			root = R1(root);
		}

	}


	return root;

}