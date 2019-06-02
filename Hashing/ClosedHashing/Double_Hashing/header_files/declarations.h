#pragma

#include "common.h"

int hash(int key, int size);
int second_hash(int key);
HashTable* ht_create(int size);
Entry* ht_search(HashTable* hashTable, int key);
void ht_put(HashTable* hashTable, int key, int value);
int ht_get(HashTable* hashTable, int key);
int ht_delete(HashTable* hashTable, int key);
void ht_print(HashTable* hashTable);
int isPrime(int num);
