#pragma

#include "common.h"

Node* createNode(int data);
int nodeHeight(Node* node);
int balanceFactor(Node* node);
Node* avl_delete(Node* root, int data);
Node* avl_insert(Node* root, int data);
Node* findMin(Node* root);
void print_ascii_tree(Node* t);

Node* LRRotation(Node* p);
Node* RLRotation(Node* p);
Node* RRRotation(Node* p);
Node* LLRotation(Node* p);

Node* L_1(Node* root);
Node* L0(Node* root);
Node* L1(Node* root);
Node* R_1(Node* root);
Node* R0(Node* root);
Node* R1(Node* root);