#include "header_files/declarations.h"

int main() {


	Node* root = NULL;
	
	root = avl_insert(root, 1);
	root = avl_insert(root, 2);
	root = avl_insert(root, 3);
	root = avl_insert(root, 4);
	root = avl_insert(root, 5);
	root = avl_insert(root, -21);
	root = avl_insert(root, -32);
	root = avl_insert(root, 6);
	root = avl_insert(root, 7);
	root = avl_insert(root, 8);
	root = avl_insert(root, 9);
	root = avl_insert(root, 10);
	root = avl_insert(root, 10);
	root = avl_insert(root, -3);
	root = avl_insert(root, 0);
	root = avl_insert(root, 13);
	root = avl_insert(root, 14);
	root = avl_insert(root, 20);
	root = avl_insert(root, 30);
	root = avl_insert(root, 22);
	root = avl_insert(root, 25);

	print_ascii_tree(root);
	printf("\n\n");

	root = avl_delete(root, 1); print_ascii_tree(root);
	root = avl_delete(root, 2); print_ascii_tree(root);
	root = avl_delete(root, 3); print_ascii_tree(root);
	root = avl_delete(root, 4); print_ascii_tree(root);
	root = avl_delete(root, 5); print_ascii_tree(root);
	root = avl_delete(root, -21); print_ascii_tree(root);
	root = avl_delete(root, -32); print_ascii_tree(root);
	root = avl_delete(root, 6); print_ascii_tree(root);
	root = avl_delete(root, 7); print_ascii_tree(root);
	root = avl_delete(root, 8); print_ascii_tree(root);
	root = avl_delete(root, 9); print_ascii_tree(root);
	root = avl_delete(root, 10); print_ascii_tree(root);
	root = avl_delete(root, 10); print_ascii_tree(root);
	root = avl_delete(root, -3); print_ascii_tree(root);
	root = avl_delete(root, 0); print_ascii_tree(root);
	root = avl_delete(root, 13); print_ascii_tree(root);
	root = avl_delete(root, 14); print_ascii_tree(root);
	root = avl_delete(root, 20); print_ascii_tree(root);
	root = avl_delete(root, 30); print_ascii_tree(root);
	root = avl_delete(root, 22); print_ascii_tree(root);
	root = avl_delete(root, 25); print_ascii_tree(root);

	print_ascii_tree(root);


	return 0;

}