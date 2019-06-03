#pragma

#include <stdio.h>
#include <stdlib.h>

#define TRUE 1
#define FALSE 0


typedef struct Node {
	struct Node* left;
	int data;
	int height;
	struct Node* right;
}Node;