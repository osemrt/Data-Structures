#include "header_files/declarations.h"

int probe(HashTable* hashTable, int key) {

	if (hashTable == NULL) {
		return INT_MIN;
	}

	int hashIndex = hash(key, hashTable->size);

	int i = 0;
	while (hashTable->arr[(hashIndex + i* second_hash(key)) % hashTable->size].status != EMPTY) {
		i++;
	}

	return (hashIndex + i* second_hash(key)) % hashTable->size;

}