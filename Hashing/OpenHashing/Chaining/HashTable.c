#include "header_files/declarations.h"

HashTable* ht_create(int size) {

	if (size < 1) {
		return NULL;
	}

	HashTable* hashTable = (HashTable*)malloc(sizeof(HashTable));
	if (hashTable == NULL) {
		return NULL;
	}


	hashTable->arr = (Node * *)malloc(sizeof(Node*) * size);
	if (hashTable->arr == NULL) {
		return NULL;
	}

	for (int i = 0; i < size; i++)
		hashTable->arr[i] = NULL;

	hashTable->size = size;

	return hashTable;
}

int ht_put(HashTable* hashTable, int key, int value) {
	if (hashTable == NULL)
		return FALSE;

	return insertNode(&hashTable->arr[hash(key, hashTable->size)], value);
}

int ht_get(HashTable* hashTable, int key) {

	if (hashTable == NULL)
		return INT_MIN;

	return searchNode(&hashTable[hash(key, hashTable->size)], key)->data;
}

void ht_free(HashTable* hashTable) {

	int i; Node* tmp, *next;

	if (hashTable == NULL)
		return;

	for (i = 0; i < hashTable->size; i++) {

		if (hashTable->arr[i] != NULL) {
			
			while (hashTable->arr[i] != NULL) {
				tmp = hashTable->arr[i]->next;
				free(hashTable->arr[i]);
				hashTable->arr[i] = tmp;
			}

			free(hashTable->arr[i]);


		}

	}

	free(hashTable->arr);
	free(hashTable);

}

void ht_print(HashTable* hashTable) {

	if (hashTable == NULL) {
		return;
	}

	int i;
	printf("\nPrinting hashTable...\n");
	for (i = 0; i < hashTable->size; i++) {
		printf("%d: ", i);
		while (hashTable->arr[i] != NULL) {
			printf("%d -> ", hashTable->arr[i]->data);
			hashTable->arr[i] = hashTable->arr[i]->next;
		}
		printf("%s\n", "NULL");

	}

}

