#include "header_files/declarations.h"

int main() {

	NODE* root = NULL;

	//root = insert(root, 10);
	//root = insert(root, 5);
	//root = insert(root, 15);
	//root = insert(root, 0);
	
	insert(&root, 10);
	insert(&root, 5);
	insert(&root, 15);
	insert(&root, 0);

	if (search(root, 25) != NULL)
		printf("ok");
	
	return 0;
}