#include "header_files/declarations.h"

Node* findMin(Node* root) {

	while (root->left != NULL) {
		root = root->left;
	}
	return root;
}