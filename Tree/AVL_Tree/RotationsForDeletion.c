#include "header_files/declarations.h"

Node* L_1(Node* root) {
	return LRRotation(root);
}
Node* L0(Node* root) {
	return L1(root); //or L_1(root);
}
Node* L1(Node* root) {
	return LLRotation(root);
}
Node* R_1(Node* root) {
	return RRRotation(root);
}
Node* R0(Node* root) {
	return R1(root); //or R_1(root);
}
Node* R1(Node* root) {
	return RLRotation(root);
}
