#include "header_files/declarations.h"

int balanceFactor(Node* node) {

	int hl, hr;

	if (node != NULL && node->left != NULL) {
		hl = node->left->height;
	}
	else {
		hl = 0;
	}


	if (node != NULL && node->right != NULL) {
		hr = node->right->height;
	}
	else {
		hr = 0;
	}

	return hl - hr;

}