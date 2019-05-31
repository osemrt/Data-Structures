#include "header_files/declarations.h"

int* createFlagArray(int size, int flag) {
	int* arr = (int*)malloc(sizeof(int) * size);
	for (int i = 0; i < size; i++)
		arr[i] = flag;
	return arr;
}