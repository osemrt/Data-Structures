#include "header_files/declarations.h"

int main() {

	HashTable* hashTable = ht_create(10);

	//ht_print(hashTable);
	ht_put(hashTable, 2, 23);
	ht_put(hashTable, 12, 23);
	ht_put(hashTable, 43, 23);
	ht_put(hashTable, 548, 654);
	ht_put(hashTable, 568, 654);
	ht_put(hashTable, 598, 654);
	ht_delete(hashTable, 12);
	ht_print(hashTable);

	printf("\n%d\n", ht_search(hashTable, 43)->hashNode->value);
	printf("%d\n", ht_get(hashTable, 43));

	return 0;
}