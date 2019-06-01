#pragma

#include <stdio.h>
#include <stdlib.h>

#define TRUE 1
#define FALSE 0

enum entryStatus { EMPTY, DELETED, OCCUPIED };

typedef struct HashNode {
	int key;
	int value;
}HashNode;

typedef struct Entry{
	struct HashNode* hashNode;
	enum entryStatus status;
}Entry;

typedef struct HashTable {
	int size;
	struct Entry* arr;
}HashTable;



