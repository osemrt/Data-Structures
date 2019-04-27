#include "header_files/declarations.h"

/**
*	Creates a node from heap memory
*	@param int data the given qualification
*	@return the address of the created node or NULL as an error indicator
*/

NODE* cerateNode(int data) {

	NODE* node = (NODE*)malloc(sizeof(NODE));
	if (node != NULL) {

		node->data = data;
		node->left = NULL;
		node->right = NULL;
	}
	else {
		return NULL;
	}

}