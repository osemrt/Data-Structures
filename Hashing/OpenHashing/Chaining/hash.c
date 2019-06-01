#include "header_files/declarations.h"

int hash(int key, int size) {
	return key % size;
}