#include "header_files/declarations.h"

Node* createNode(int data) {
	Node* node = (Node*)malloc(sizeof(Node));
	node->data = data;
	node->left = node->right = NULL;
	node->height = 1;
	return node;
}