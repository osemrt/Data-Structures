#include "header_files/declarations.h"

int** createMatrix(int numOfRow, int numOfColumn) {

	int** matrix = (int**)malloc(sizeof(int*) * numOfRow);
	for (int i = 0; i < numOfRow; i++)
		matrix[i] = (int*)malloc(sizeof(int) * numOfColumn);
	return matrix;
}