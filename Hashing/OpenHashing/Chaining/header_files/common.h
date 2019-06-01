#pragma

#include <stdio.h>
#include <stdlib.h>

#define TRUE 1
#define FALSE 0

typedef struct Node {
	int data;
	struct Node* next;
}Node;

typedef struct HashTable {
	int size;
	Node** arr;
}HashTable;