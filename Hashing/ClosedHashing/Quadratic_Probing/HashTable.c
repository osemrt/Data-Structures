#include "header_files/declarations.h"

HashTable* ht_create(int size) {
	HashTable* hashTable = (HashTable*)malloc(sizeof(HashTable));
	if (hashTable == NULL) {
		return NULL;
	}

	hashTable->arr = (Entry*)malloc(sizeof(Entry) * size);
	if (hashTable->arr == NULL) {
		return NULL;
	}

	hashTable->size = size;

	int i;
	for (i = 0; i < hashTable->size; i++) {
		hashTable->arr[i].status = EMPTY;
		hashTable->arr[i].hashNode = (HashNode*)malloc(sizeof(HashNode));
		if (hashTable->arr[i].hashNode == NULL) {
			return NULL;
		}
	}

	return hashTable;

}

Entry* ht_search(HashTable* hashTable, int key) {

	if (hashTable == NULL) {
		return NULL;
	}

	int hashIndex = hash(key, hashTable->size);

	int i = 0;
	while (hashTable->arr[(hashIndex + i * i) % hashTable->size].status != EMPTY && hashTable->arr[(hashIndex + i * i) % hashTable->size].hashNode->key != key) {
		i++;
	}

	if (hashTable->arr[(hashIndex + i * i) % hashTable->size].hashNode->key == key) {
		return &hashTable->arr[(hashIndex + i*i) % hashTable->size];
	}

	return NULL;

}

void ht_put(HashTable* hashTable, int key, int value) {
	int hashIndex = hash(key, hashTable->size);
	if (hashTable->arr[hashIndex].status == OCCUPIED) {
		hashIndex = probe(hashTable, key);
	}
	
	hashTable->arr[hashIndex].status = OCCUPIED;
	hashTable->arr[hashIndex].hashNode->key = key;
	hashTable->arr[hashIndex].hashNode->value = value;
}

int ht_get(HashTable* hashTable, int key) {
	Entry* entry = ht_search(hashTable, key);

	if (entry == NULL) {
		return INT_MIN;
	}

	return entry->hashNode->value;

}

int ht_delete(HashTable* hashTable, int key) {

	Entry* entry = ht_search(hashTable, key);

	if (entry == NULL) {
		return FALSE;
	}

	entry->status = DELETED;
	return TRUE;

}

void ht_print(HashTable* hashTable) {

	printf("\nPrinting hashTable...\n");
	int i;
	for (i = 0; i < hashTable->size; i++) {
		if (hashTable->arr[i].status == OCCUPIED) {
			printf("%d: (%d, %d)\n", i, hashTable->arr[i].hashNode->key, hashTable->arr[i].hashNode->value);
		}
		else if (hashTable->arr[i].status == EMPTY) {
			printf("%d: %s\n", i, "EMPTY!");
		}
		else {
			printf("%d: %s\n", i, "DELETED!");
		}
	}


}
