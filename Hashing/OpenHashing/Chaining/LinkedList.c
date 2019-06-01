#include "header_files/declarations.h"

/**
*	Creates a node from the heap memory and assign its value
*	@param int data the value will be added to the node
*	@return the address of the created node
*/

Node* createNode(int data) {
	Node* node = (Node*)malloc(sizeof(Node));
	node->data = data;
	node->next = NULL;
	return node;
}

/**
*	Inserts a node to the given linked list in the ascending order
*	@param Node** pointerToHead it holds the address of the cell that the root is placed
*	@param int data the value will be added to the given linked list
*	@return TRUE or FALSE to indicate whether the insertion is successful or not
*/

int insertNode(Node** pointerToHead, int data) {

	Node* head = *pointerToHead;
	Node* node = createNode(data);

	if (node == NULL) {
		return FALSE;
	}
	else if (head == NULL) {
		*pointerToHead = node;
	}
	else if (data < head->data) {
		node->next = head;
		*pointerToHead = node;
	}
	else {
		Node* prev = head;
		Node* current = head->next;

		while (current != NULL && current->data < data) {
			prev = current;
			current = current->next;
		}

		if (current == NULL) {
			prev->next = node;
		}
		else {
			prev->next = node;
			node->next = current;
		}
	}

	return TRUE;
}

/**
*	Removes a node from the linked list
*	@param Node** pointerToHead it holds the address of the cell that the root is placed
*	@param int data it is the value of the node that will be removed
*	@return	TRUE or FALSE to indicate whether the deletion is successful or not
*/

int deleteNode(Node** pointerToHead, int data) {

	Node* head = *pointerToHead;

	if (head == NULL) {
		return FALSE;
	}
	else if (head->data == data) {
		*pointerToHead = head->next;
		free(head);
	}
	else {
		Node* prev = head;
		Node* current = head->next;

		while (current->data < data) {
			prev = current;
			current = prev->next;
		}

		if (current->data != data) {
			return FALSE;
		}

		prev->next = current->next;
		free(current);

	}

	return TRUE;

}

/**
*	Searches a node in the linked list and returns its address
*	@param Node* head the address of the head
*	@param int data the value of the node will be searched
*	@return the address of the found node
*/

Node* searchNode(Node* head, int data) {

	while (head != NULL && head->data != data) {
		head = head->next;
	}

	return head;
}

/**
*	Prints the given linked list
*	@param Node* head the address of the head
*/

void printList(Node* head) {

	printf("\nPrinting linkedlist...\n");
	while (head != NULL) {
		printf("%d -> ", head->data);
		head = head->next;
	}

	printf("%s\n ", "NULL");

}