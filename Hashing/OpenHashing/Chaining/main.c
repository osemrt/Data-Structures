#include "header_files/declarations.h"

int main() {

	HashTable* hashTable = ht_create(10);

	ht_put(hashTable, 10, 20);
	ht_put(hashTable, 10, 20);
	ht_put(hashTable, 23, 34);
	ht_put(hashTable, 30, 22);
	ht_put(hashTable, 47, 512);
	ht_put(hashTable, 52, 55);
	ht_print(hashTable);
	ht_put(hashTable, 10, 20);
	ht_put(hashTable, 10, 20);
	ht_put(hashTable, 23, 34);
	ht_put(hashTable, 30, 22);
	ht_put(hashTable, 47, 512);
	ht_put(hashTable, 52, 55);
	ht_print(hashTable);
	

	return 0;
}