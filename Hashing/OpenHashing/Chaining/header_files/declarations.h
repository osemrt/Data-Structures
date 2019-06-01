#pragma

#include "common.h"

int hash(int key, int size);

//HashTable functions
HashTable* ht_create(int size);
int ht_put(HashTable* hashTable, int key, int value);
int ht_get(HashTable* hashTable, int key);
void ht_free(HashTable* hashTable);
void ht_print(HashTable* hashTable);

//LinkedList functions
Node* createNode(int data);
int insertNode(Node** pointerToHead, int data);
int deleteNode(Node** pointerToHead, int data);
Node* searchNode(Node* head, int data);
void printList(Node* head);

