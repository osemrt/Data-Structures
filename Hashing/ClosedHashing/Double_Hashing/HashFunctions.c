#include "header_files/declarations.h"


int hash(int key, int size) {
	return key % size;
}

int second_hash(int key) {
	return (R - (key % R));
}